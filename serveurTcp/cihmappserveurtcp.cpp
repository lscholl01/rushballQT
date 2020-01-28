#include "cihmappserveurtcp.h"
#include "ui_CIhmAppServeurTcp.h"

CIhmAppServeurTcp::CIhmAppServeurTcp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CIhmAppServeurTcp)
{

    ui->setupUi(this);
    ui->pbEnvoyer->setEnabled(false);

    QPalette palette;
    palette.setColor(QPalette::Base, Qt::gray);
    ui->pannel1->setPalette(palette);
    ui->pannel2->setPalette(palette);
    ui->pannel3->setPalette(palette);
    ui->pannel4->setPalette(palette);
    ui->pannel5->setPalette(palette);
    ui->pannel6->setPalette(palette);

    serv = new CServeurTcp(this, PORT);
    connect(serv, SIGNAL(sigEvenementServeur(QString)), this, SLOT(onEvenementServeur(QString)));
    connect(serv, SIGNAL(sigDataClient(QString,QString)), this, SLOT(onDataRecu(QString,QString)));
    connect(serv, SIGNAL(sigErreur(QAbstractSocket::SocketError)), this, SLOT(onErreurServeur(QAbstractSocket::SocketError)));
    connect(serv, SIGNAL(sigAdrClient(QString)), this, SLOT(onAdrClient(QString)));
    connect(serv, SIGNAL(sigMajClients(QList<QTcpSocket*>)), this, SLOT(onListeMajClients(QList<QTcpSocket*>)));

}

CIhmAppServeurTcp::~CIhmAppServeurTcp()
{
    delete serv;
    delete ui;
}

void CIhmAppServeurTcp::on_pbEnvoyer_clicked()
{
    serv->emettreVersClient(ui->leTexte->text());
}

void CIhmAppServeurTcp::onEvenementServeur(QString eve)
{
    if (eve=="DEC") {
        ui->teTexte->append("Déconnexion d'un client.");
    }
    if (eve=="CON") {
        ui->teTexte->append("Connexion d'un client");
        ui->pbEnvoyer->setEnabled(true);
    }
}

void CIhmAppServeurTcp::onDataRecu(QString adrIpClient, QString data)
{
    ui->teTexte->append(adrIpClient+": "+data);
}

void CIhmAppServeurTcp::onErreurServeur(QAbstractSocket::SocketError err)
{
    switch (err) {
        case QAbstractSocket::ConnectionRefusedError:
            ui->teTexte->append("Connection refusé par le serveur");
        break;
        case QAbstractSocket::NetworkError:
            ui->teTexte->append("Coupure e liaison reseau");
        break;
        default:
            ui->teTexte->append("Erreur réseau à déterminer");
        break;
    }
}

void CIhmAppServeurTcp::onAdrClient(QString adrClient)
{
    ui->teTexte->append(adrClient+" est connecté.");
}

void CIhmAppServeurTcp::onListeMajClients(QList<QTcpSocket *> liste)
{
    ui->cbListe->clear();
    for (int i=0 ; i<liste.size() ; i++) {
        ui->cbListe->addItem(liste.at(i)->localAddress().toString()+ "->"+QString::number((unsigned long)liste.at(i)));
        qDebug() << "CHimAppServeurTcp::onListeMajClients"
                 << liste.at(i)->localAddress().toString()+ "->"+QString::number((unsigned long)liste.at(i));
    }
    if (liste.size()==0)
        ui->pbEnvoyer->setEnabled(false);
}
