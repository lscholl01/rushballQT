#ifndef CSERVEURTCP_H
#define CSERVEURTCP_H

#include <QTcpServer>
#include <QTcpSocket>
#include <QDebug>
#include "ctrame.h"

#define PORTPARDEFAUT 2222

class CServeurTcp : public QTcpServer
{
    Q_OBJECT
public:
    explicit CServeurTcp(QObject *parent = 0);
    explicit CServeurTcp(QObject *parent = 0, quint16 noPort = 2222);
    ~CServeurTcp();
    int emettreVersClient(QString mess);
    void changeConnectedClient();

signals:
    void sigEvenementServeur(QString eve);
    void sigErreur(QAbstractSocket::SocketError err);
    void sigDataClient(QString adrIpClient, QString data);
    void sigAdrClient(QString adrClient);
    void sigMajClients(QList<QTcpSocket *> liste);
    void sigAfficherResumerTrame(CTrame *trame);

public slots:
    void onNewConnectionClient();
    void OnDisconnectedClient();
    void onErreurReseau(QAbstractSocket::SocketError err);
    void onReadyReadClient();

private:
    int init();
    bool connectedClient; //1 = connected   0 = non connected
    quint16 m_noport;
    QList<QTcpSocket *> listeClients;
};






#endif // CSERVEURTCP_H
