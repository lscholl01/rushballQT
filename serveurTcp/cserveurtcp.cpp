#include "cserveurtcp.h"

CServeurTcp::CServeurTcp(QObject *parent) :
    QTcpServer(parent)
{
    m_noport = PORTPARDEFAUT;
    init();
}

CServeurTcp::CServeurTcp(QObject *parent, quint16 noPort) :
    QTcpServer(parent)
{
    m_noport = noPort;
    init();
}

CServeurTcp::~CServeurTcp()
{
    for (int i=0 ; i<listeClients.size() ; i++) {
        listeClients.at(i)->close();
        delete listeClients.at(i);
    }
}

int CServeurTcp::emettreVersClient(QString mess)
{
    for (int i=0 ; i<listeClients.size() ; i++) {
        listeClients.at(i)->write(mess.toStdString().c_str());
        qDebug() << "Envoi vers " << listeClients.at(i);
    }
    return 1;
}

int CServeurTcp::init()
{
    listen(QHostAddress::Any, m_noport);
    connect(this,SIGNAL(newConnection()), this, SLOT(onNewConnectionClient()));
    connect(this, SIGNAL(acceptError(QAbstractSocket::SocketError)), this, SLOT(onErreurReseau(QAbstractSocket::SocketError)));
    return 1;
}

void CServeurTcp::onNewConnectionClient()
{
    QString mess="Un client vient de se connecter";
    qDebug() << mess;
    QTcpSocket *newClient = this->nextPendingConnection();
    qDebug() << "Nouvelle connection : " << newClient;
    if (newClient == NULL)
        emit sigErreur(QAbstractSocket::ConnectionRefusedError);
    connect(newClient, SIGNAL(readyRead()), this, SLOT(onReadyReadClient()));
    connect(newClient, SIGNAL(disconnected()), this, SLOT(OnDisconnectedClient()));
    listeClients.append(newClient);
    emit sigEvenementServeur("CON");
    emit sigAdrClient(newClient->localAddress().toString());
    emit sigMajClients(listeClients);
}

void CServeurTcp::OnDisconnectedClient()
{
    QTcpSocket *client = (QTcpSocket *)sender();
    emit sigEvenementServeur("DEC");
    listeClients.removeOne(client);
    //delete client;
    client->deleteLater();
    emit sigMajClients(listeClients);
}

void CServeurTcp::onErreurReseau(QAbstractSocket::SocketError err)
{
    qDebug() << "erreur réseau !";
    emit sigErreur(err);
}

void CServeurTcp::onReadyReadClient()
{
    QByteArray ba;
    QTcpSocket *client = (QTcpSocket *)sender();
    ba=client->readAll();
    qDebug() << "Client : " << client << ba.size() << " Caracteres reçus";
    emit sigDataClient(client->localAddress().toString(), QString(ba));
}


