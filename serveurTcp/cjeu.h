#ifndef CJEU_H
#define CJEU_H
#include "ctrame.h"


class CJeu
{
public:
    CJeu();
    CJeu(CTrame trame);

private:
    int scoreJoueur1;
    int scoreJoueur2;
    int scoreJoueur3;
    int scoreJoueur4;
};

#endif // CJEU_H
