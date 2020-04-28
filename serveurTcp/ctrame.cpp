#include "ctrame.h"
#include <QDebug>

CTrame::CTrame(QObject *parent):
    QObject(parent)
{

}

CTrame::CTrame(QObject *parent, QString trame):  //exemple de trame   :P|3|        Billy;          Bob;      Patrick;             |T;S;300| 2|4; 6|1;40|6|1; 5|2; 7|3; 9|4;15|5;17|6;20|abcd|*
    QObject(parent)
{
    //besoin de démonter la trame reçu afin de séparer les différent composant
    this->clientType = QStringRef(&trame,1,1).at(0);

    this->nbrJoueur = QStringRef(&trame,3,1).toInt();

    for (int i=1; i <= getNbrJoueur(); i++) {
        switch(i){
            case 1:
                this->nomJoueur1 = QStringRef(&trame,5,13).toString();
                break;
            case 2:
                this->nomJoueur2 = QStringRef(&trame,19,13).toString();
                break;
            case 3:
                this->nomJoueur3 = QStringRef(&trame,33,13).toString();
                break;
            case 4:
                this->NomJoueur4 = QStringRef(&trame,47,13).toString();
                break;
            default:
                break;
        }
    }

    this->modeDeJeu = QStringRef(&trame,61,1).at(0);

    switch(this->modeDeJeu.unicode()) {
    case 'P':
        this->varianteDeJeu = QStringRef(&trame,63,1).at(0);
        this->objectifDeJeu = QStringRef(&trame,65,3).toInt();
        break;
    case 'M':
        this->varianteDeJeu = QStringRef(&trame,63,1).at(0);
        this->objectifDeJeu = QStringRef(&trame,65,3).toInt();
        break;
    case 'B':
        this->varianteDeJeu = QStringRef(&trame,63,1).at(0);
        break;
    }

    this->faute = QStringRef(&trame,69,2).toInt();

    this->nbrPanneauDeJeu = QStringRef(&trame,72,1).toInt();
    this->nbrCibleAllumer = QStringRef(&trame,74,2).toInt();

    if (QStringRef(&trame,77,1).toInt() == 1) {
        this->jokerPresent = true;
        this->scoreJoker = QStringRef(&trame,79,2).toInt();
    } else {
        this->jokerPresent = false;
    }

    this->nbrCibleDifferente = QStringRef(&trame,82,1).toInt();

    for (int i = 1; i <= this->nbrCibleDifferente ;i++ ) {
        switch (i) {
            case 1:
                this->couleurCible1 = QStringRef(&trame,84,1).toInt();
                this->scoreCible1 = QStringRef(&trame,86,2).toInt();
                break;
            case 2:
                this->couleurCible2 = QStringRef(&trame,89,1).toInt();
                this->scoreCible2 = QStringRef(&trame,91,2).toInt();
                 break;
            case 3:
                this->couleurCible3 = QStringRef(&trame,94,1).toInt();
                this->scoreCible3 = QStringRef(&trame,96,2).toInt();
                  break;
            case 4:
                this->couleurCible4 = QStringRef(&trame,99,1).toInt();
                this->scoreCible4 = QStringRef(&trame,101,2).toInt();
                  break;
            case 5:
                this->couleurCible5 = QStringRef(&trame,104,1).toInt();
                this->scoreCible5 = QStringRef(&trame,106,2).toInt();
                  break;
            case 6:
                this->couleurCible6 = QStringRef(&trame,19,1).toInt();
                this->scoreCible6 = QStringRef(&trame,111,2).toInt();
                  break;
            default:
                break;
        }
    }
    this->cr16 = QStringRef(&trame,114,4).toString();

    //fin de la decomposition de la trame
}

CTrame::~CTrame()
{

}

//--------getter--------


QChar CTrame::getClientType() const
{
    return clientType;
}

int CTrame::getNbrJoueur() const
{
    return nbrJoueur;
}

QString CTrame::getNomJoueur1() const
{
    return nomJoueur1;
}

QString CTrame::getNomJoueur2() const
{
    return nomJoueur2;
}

QString CTrame::getNomJoueur3() const
{
    return nomJoueur3;
}

QString CTrame::getNomJoueur4() const
{
    return NomJoueur4;
}

QChar CTrame::getModeDeJeu() const
{
    return modeDeJeu;
}

int CTrame::getObjectifDeJeu() const
{
    return objectifDeJeu;
}

int CTrame::getNbrPanneauDeJeu() const
{
    return nbrPanneauDeJeu;
}

int CTrame::getNbrCibleAllumer() const
{
    return nbrCibleAllumer;
}

bool CTrame::getJokerPresent() const
{
    return jokerPresent;
}

int CTrame::getCouleurJoker() const
{
    return couleurJoker;
}

int CTrame::getScoreJoker() const
{
    return scoreJoker;
}

int CTrame::getCouleurCible1() const
{
    return couleurCible1;
}

int CTrame::getScoreCible1() const
{
    return scoreCible1;
}

int CTrame::getCouleurCible2() const
{
    return couleurCible2;
}

int CTrame::getScoreCible2() const
{
    return scoreCible2;
}

int CTrame::getCouleurCible3() const
{
    return couleurCible3;
}

int CTrame::getScoreCible3() const
{
    return scoreCible3;
}

int CTrame::getCouleurCible4() const
{
    return couleurCible4;
}

int CTrame::getScoreCible4() const
{
    return scoreCible4;
}

int CTrame::getFaute() const
{
    return faute;
}

QChar CTrame::getVarianteDeJeu() const
{
    return varianteDeJeu;
}

int CTrame::getNbrCibleDifferente() const
{
    return nbrCibleDifferente;
}

QString CTrame::getCr16() const
{
    return cr16;
}

int CTrame::getCouleurCible5() const
{
    return couleurCible5;
}

int CTrame::getScoreCible5() const
{
    return scoreCible5;
}

int CTrame::getCouleurCible6() const
{
    return couleurCible6;
}

int CTrame::getScoreCible6() const
{
    return scoreCible6;
}

//--------fin-getter---------
