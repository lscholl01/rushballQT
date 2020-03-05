#include "cihmappserveurtcp.h"
#include "ui_CIhmAppServeurTcp.h"
#include <QList>
#include <QPalette>

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
    connect(serv, &CServeurTcp::sigAfficherResumerTrame, this, &CIhmAppServeurTcp::onAfficherResumerTrame);
    //connect(serv, SIGNAL(sigAfficherResumerTrame(CTrame)), this, SLOT(onAfficherResumerTrame(CTrame)));

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

void CIhmAppServeurTcp::onAfficherResumerTrame(CTrame *trame) {

    QPalette palette;

    /*QPalette pBlue = new QPalette(QPalette::Base, Qt::blue);
    QPalette pCyan = new QPalette(QPalette::Base, Qt::cyan);
    QPalette pWhite = new QPalette(QPalette::Base, Qt::white);
    QPalette pMagenta = new QPalette(QPalette::Base, Qt::magenta);
    QPalette pRed = new QPalette(QPalette::Base, Qt::red);
    QPalette pGreen = new QPalette(QPalette::Base, Qt::green);

    QList<QPalette> listPalette = new QList<QPalette>(*pBlue, *pCyan, *pWhite, *pMagenta, *pRed, *pGreen);
    */
    palette.setColor(QPalette::Base, Qt::gray);
    ui->pannel1->setPalette(palette);
    ui->pannel2->setPalette(palette);
    ui->pannel3->setPalette(palette);
    ui->pannel4->setPalette(palette);
    ui->pannel5->setPalette(palette);
    ui->pannel6->setPalette(palette);

    palette.setColor(QPalette::Base,Qt::blue);

    ui->quiClient->setText(QString(trame->getClientType()));

    ui->nomJoueur1->setText(trame->getNomJoueur1());
    ui->nomJoueur2->setText(trame->getNomJoueur2());
    ui->nomJoueur3->setText(trame->getNomJoueur3());
    ui->nomJoueur4->setText(trame->getNomJoueur4());

    ui->modeDeJeu->setText(QString(trame->getModeDeJeu()));
    ui->varianteDeJeu->setText(QString(trame->getVarianteDeJeu()));
    ui->valeurDuJeu->setText(QString(trame->getObjectifDeJeu()));

    for (int i = 0; i < trame->getNbrPanneauDeJeu(); i++) {
    switch (i){
    case 1:
        ui->pannel1->setPalette(palette);
        break;
    case 2:
        ui->pannel2->setPalette(palette);
        break;
    case 3:
        ui->pannel3->setPalette(palette);
        break;
    case 4:
        ui->pannel4->setPalette(palette);
        break;
    case 5:
        ui->pannel5->setPalette(palette);
        break;
    case 6:
        ui->pannel6->setPalette(palette);
        break;
    }
    }

    ui->cibleActif->setText(QString(trame->getNbrCibleAllumer()));
    ui->cibleMax->setText(QString(trame->getNbrPanneauDeJeu()*3));

    if (trame->getJokerPresent()) {
        ui->colorJoker->setPalette(Qt::yellow);
        ui->nbrPointJoker->setText(QString(trame->getScoreJoker()));
    }

    for (int i = 0; i < trame->getNbrCibleDifferente();i++){

    }


}
