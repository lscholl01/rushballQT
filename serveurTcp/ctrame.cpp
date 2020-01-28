#include "ctrame.h"

CTrame::CTrame(QString trame)  //exemple de trame   :P|3|        Billy;          Bob;      Patrick;             |T;300| 2; 3; 4; 5|4; 6|1; 1;20|3| 2; 5| 3; 7| 4; 9| 5;15|azertyuiopqsdfgh|*
{
    //besoin de démonter la trame reçu afin de séparer les différent composant
    this->nbrJoueur = QStringRef(trame,1,1);
    QDebug() << this->nbrJoueur;
}

CTrame::~CTrame()
{

}

//--------getter--------


unsigned char CTrame::getClientType() const
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

char CTrame::getModeDeJeu() const
{
    return modeDeJeu;
}

int CTrame::getObjectifDeJeu() const
{
    return objectifDeJeu;
}

int CTrame::getFauteRaterPanneau() const
{
    return fauteRaterPanneau;
}

int CTrame::getFauteMauvaisJoueur() const
{
    return fauteMauvaisJoueur;
}

int CTrame::getFauteJongle() const
{
    return fauteJongle;
}

int CTrame::getFauteZoneDeJeu() const
{
    return fauteZoneDeJeu;
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

//--------fin-getter---------
