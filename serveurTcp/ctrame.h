#ifndef CTRAME_H
#define CTRAME_H

#include <QObject>
#include <QString>
#include <QDebug>
#include <QChar>

class CTrame : public QObject
{
    Q_OBJECT

public:
    explicit CTrame(QObject *parent = nullptr);
    explicit CTrame(QObject *parent = nullptr, QString trame = "");
    ~CTrame();

    bool getJokerPresent() const;
    QChar getClientType() const;
    int getNbrJoueur() const;
    QString getNomJoueur1() const;
    QString getNomJoueur2() const;
    QString getNomJoueur3() const;
    QString getNomJoueur4() const;
    QChar getModeDeJeu() const;
    int getObjectifDeJeu() const;
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
    int getCouleurCible5() const;
    int getScoreCible5() const;
    int getCouleurCible6() const;
    int getScoreCible6() const;
    int getFaute() const;
    QChar getVarianteDeJeu() const;

    int getNbrCibleDifferente() const;

    
    QString getCr16() const;

private:
    QChar clientType; //P = PC    M = Mobile

    int nbrJoueur;
    QString nomJoueur1;
    QString nomJoueur2;
    QString nomJoueur3;
    QString NomJoueur4;

    QString cr16 = "0000";

    QChar modeDeJeu;  //T = Temps     S = Score
    int objectifDeJeu; // Temps en seconde et Score en points
    QChar varianteDeJeu;

    int faute;

    int nbrPanneauDeJeu;
    int nbrCibleAllumer;

    bool jokerPresent;
    int couleurJoker;
    int scoreJoker;
    
    int nbrCibleDifferente;

    int couleurCible1 = 0;
    int scoreCible1 = 0;

    int couleurCible2 = 0;
    int scoreCible2 = 0;

    int couleurCible3 = 0;
    int scoreCible3 = 0;

    int couleurCible4 = 0;
    int scoreCible4 = 0;

    int couleurCible5 = 0;
    int scoreCible5 = 0;

    int couleurCible6 = 0;
    int scoreCible6 = 0;


};





#endif // CTRAME_H
