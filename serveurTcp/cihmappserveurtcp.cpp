#include "cihmappserveurtcp.h"
#include "ui_CIhmAppServeurTcp.h"
#include <QList>
#include <QPalette>
#include <QVector>

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

    //mettre les panneau en gris pour remettre a zéro d'une configuration précédente
    palette.setColor(QPalette::Base, Qt::gray);
    ui->pannel1->setPalette(palette);
    ui->pannel2->setPalette(palette);
    ui->pannel3->setPalette(palette);
    ui->pannel4->setPalette(palette);
    ui->pannel5->setPalette(palette);
    ui->pannel6->setPalette(palette);



    ui->quiClient->setText(QString(trame->getClientType()));

    ui->nomJoueur1->setText(trame->getNomJoueur1());
    ui->nomJoueur2->setText(trame->getNomJoueur2());
    ui->nomJoueur3->setText(trame->getNomJoueur3());
    ui->nomJoueur4->setText(trame->getNomJoueur4());

    ui->modeDeJeu->setText(QString(trame->getModeDeJeu()));
    ui->varianteDeJeu->setText(QString(trame->getVarianteDeJeu()));
    ui->valeurDuJeu->setText(QString::number(trame->getObjectifDeJeu()));

    ui->nbrPointFaute->setText(QString::number(trame->getFaute()));

    palette.setColor(QPalette::Base,Qt::blue);

    for (int i = 0; i < trame->getNbrPanneauDeJeu(); i++) {
    switch (i){
    case 0:
        ui->pannel1->setPalette(palette);
        break;
    case 1:
        ui->pannel2->setPalette(palette);
        break;
    case 2:
        ui->pannel3->setPalette(palette);
        break;
    case 3:
        ui->pannel4->setPalette(palette);
        break;
    case 4:
        ui->pannel5->setPalette(palette);
        break;
    case 5:
        ui->pannel6->setPalette(palette);
        break;
    }
    }

    ui->cibleActif->setText(QString::number(trame->getNbrCibleAllumer()));
    ui->cibleMax->setText(QString::number(trame->getNbrPanneauDeJeu()*3));

    if (trame->getJokerPresent()) {
        palette.setColor(QPalette::Base,Qt::yellow);
        ui->colorJoker->setPalette(palette);
        ui->nbrPointJoker->setText(QString::number(trame->getScoreJoker()));
    }


    ui->nbrPoint1->setText(QString::number(trame->getScoreCible1()));
    ui->nbrPoint2->setText(QString::number(trame->getScoreCible2()));
    ui->nbrPoint3->setText(QString::number(trame->getScoreCible3()));
    ui->nbrPoint4->setText(QString::number(trame->getScoreCible4()));
    ui->nbrPoint5->setText(QString::number(trame->getScoreCible5()));
    ui->nbrPoint6->setText(QString::number(trame->getScoreCible6()));

    ui->boxCR16->setText(QString(trame->getCr16()));


    //blue cyan white magenta red green

    QList<QString> listColor;
    listColor.append("filler");
    listColor.append("blue");
    listColor.append("cyan");
    listColor.append("white");
    listColor.append("magenta");
    listColor.append("red");
    listColor.append("green");

    for (int i = 1; i <= trame->getNbrCibleDifferente(); i++)  {
        switch(i) {
            case 1:
                ui->color1->setText(QString(listColor[trame->getCouleurCible1()]));
                break;
            case 2:
                ui->color2->setText(QString(listColor[trame->getCouleurCible2()]));
                break;
            case 3:
                ui->color3->setText(QString(listColor[trame->getCouleurCible3()]));
                break;
            case 4:
                ui->color4->setText(QString(listColor[trame->getCouleurCible4()]));
                break;
            case 5:
                ui->color5->setText(QString(listColor[trame->getCouleurCible5()]));
                break;
            case 6:
                ui->color6->setText(QString(listColor[trame->getCouleurCible6()]));
                break;


        }
    }


        /*
        switch (trame->getCouleurCible1()) {
            case 1:
                ui->color1->setPalette(listPalette[1]);
                break;
            case 2:
                ui->color1->setPalette(listPalette[2]);
                break;
            case 3:
                ui->color1->setPalette(listPalette[3]);
                break;
            case 4:
                ui->color1->setPalette(listPalette[4]);
                break;
            case 5:
                ui->color1->setPalette(listPalette[5]);
                break;
            case 6:
                ui->color1->setPalette(listPalette[6]);
                break;
        }
    */
}
