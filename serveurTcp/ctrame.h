#ifndef CTRAME_H
#define CTRAME_H

#include <QString>
#include <QDebug>

class CTrame
{
    Q_OBJECT

public:
    explicit CTrame(QString trame);
    ~CTrame();

    bool getJokerPresent() const;
    unsigned char getClientType() const;
    int getNbrJoueur() const;
    QString getNomJoueur1() const;
    QString getNomJoueur2() const;
    QString getNomJoueur3() const;
    QString getNomJoueur4() const;
    char getModeDeJeu() const;
    int getObjectifDeJeu() const;
    int getFauteRaterPanneau() const;
    int getFauteMauvaisJoueur() const;
    int getFauteJongle() const;
    int getFauteZoneDeJeu() const;
    int getNbrPanneauDeJeu() const;
    int getNbrCibleAllumer() const;
    int getCouleurJoker() const;
    int getScoreJoker() const;
    int getCouleurCible1() const;
    int getScoreCible1() const;
    int getCouleurCible2() const;
    int getScoreCible2() const;
    int getCouleurCible3() const;
    int getScoreCible3() const;
    int getCouleurCible4() const;
    int getScoreCible4() const;

private:
    unsigned char clientType; //P = PC    M = Mobile

    int nbrJoueur;
    QString nomJoueur1;
    QString nomJoueur2;
    QString nomJoueur3;
    QString NomJoueur4;

    char modeDeJeu;  //T = Temps     S = Score
    int objectifDeJeu; // Temps en seconde et Score en points

    int fauteRaterPanneau;
    int fauteMauvaisJoueur;
    int fauteJongle;
    int fauteZoneDeJeu;

    int nbrPanneauDeJeu;
    int nbrCibleAllumer;

    bool jokerPresent;
    int couleurJoker;
    int scoreJoker;

    int couleurCible1;
    int scoreCible1;

    int couleurCible2;
    int scoreCible2;

    int couleurCible3;
    int scoreCible3;

    int couleurCible4;
    int scoreCible4;
};





#endif // CTRAME_H
