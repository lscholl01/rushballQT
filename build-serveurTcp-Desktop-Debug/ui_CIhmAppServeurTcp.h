/********************************************************************************
** Form generated from reading UI file 'CIhmAppServeurTcp'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CIHMAPPSERVEURTCP_H
#define UI_CIHMAPPSERVEURTCP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CIhmAppServeurTcp
{
public:
    QWidget *centralWidget;
    QTabWidget *tab;
    QWidget *tab_jeu;
    QLineEdit *nomJoueur1;
    QLineEdit *nomJoueur2;
    QLineEdit *nomJoueur3;
    QLineEdit *nomJoueur4;
    QLineEdit *quiClient;
    QLineEdit *modeDeJeu;
    QLineEdit *valeurDuJeu;
    QLineEdit *cibleActif;
    QLineEdit *cibleMax;
    QLineEdit *pannel1;
    QLineEdit *pannel2;
    QLineEdit *pannel3;
    QLineEdit *pannel4;
    QLineEdit *pannel5;
    QLineEdit *pannel6;
    QGroupBox *groupJoker;
    QLineEdit *colorJoker;
    QLineEdit *nbrPointJoker;
    QGroupBox *groupColor1;
    QLineEdit *color1;
    QLineEdit *nbrPoint1;
    QGroupBox *groupColor2;
    QLineEdit *color2;
    QLineEdit *nbrPoint2;
    QGroupBox *groupColor3;
    QLineEdit *color3;
    QLineEdit *nbrPoint3;
    QGroupBox *groupColor4;
    QLineEdit *color4;
    QLineEdit *nbrPoint4;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QGroupBox *groupColor1_2;
    QLineEdit *color5;
    QLineEdit *nbrPoint5;
    QGroupBox *groupColor1_3;
    QLineEdit *color6;
    QLineEdit *nbrPoint6;
    QLineEdit *boxCR16;
    QLabel *label_13;
    QLineEdit *varianteDeJeu;
    QLabel *label_14;
    QWidget *tab_server;
    QLineEdit *leTexte;
    QComboBox *cbListe;
    QTextEdit *teTexte;
    QLabel *label_2;
    QPushButton *pbEnvoyer;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CIhmAppServeurTcp)
    {
        if (CIhmAppServeurTcp->objectName().isEmpty())
            CIhmAppServeurTcp->setObjectName(QStringLiteral("CIhmAppServeurTcp"));
        CIhmAppServeurTcp->resize(726, 609);
        centralWidget = new QWidget(CIhmAppServeurTcp);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tab = new QTabWidget(centralWidget);
        tab->setObjectName(QStringLiteral("tab"));
        tab->setGeometry(QRect(0, 0, 711, 531));
        tab_jeu = new QWidget();
        tab_jeu->setObjectName(QStringLiteral("tab_jeu"));
        nomJoueur1 = new QLineEdit(tab_jeu);
        nomJoueur1->setObjectName(QStringLiteral("nomJoueur1"));
        nomJoueur1->setGeometry(QRect(120, 30, 113, 33));
        nomJoueur1->setReadOnly(true);
        nomJoueur2 = new QLineEdit(tab_jeu);
        nomJoueur2->setObjectName(QStringLiteral("nomJoueur2"));
        nomJoueur2->setGeometry(QRect(280, 30, 113, 33));
        nomJoueur2->setReadOnly(true);
        nomJoueur3 = new QLineEdit(tab_jeu);
        nomJoueur3->setObjectName(QStringLiteral("nomJoueur3"));
        nomJoueur3->setGeometry(QRect(450, 30, 113, 33));
        nomJoueur3->setReadOnly(true);
        nomJoueur4 = new QLineEdit(tab_jeu);
        nomJoueur4->setObjectName(QStringLiteral("nomJoueur4"));
        nomJoueur4->setGeometry(QRect(590, 30, 113, 33));
        nomJoueur4->setReadOnly(true);
        quiClient = new QLineEdit(tab_jeu);
        quiClient->setObjectName(QStringLiteral("quiClient"));
        quiClient->setGeometry(QRect(10, 30, 31, 33));
        quiClient->setReadOnly(true);
        modeDeJeu = new QLineEdit(tab_jeu);
        modeDeJeu->setObjectName(QStringLiteral("modeDeJeu"));
        modeDeJeu->setGeometry(QRect(10, 80, 71, 33));
        modeDeJeu->setReadOnly(true);
        valeurDuJeu = new QLineEdit(tab_jeu);
        valeurDuJeu->setObjectName(QStringLiteral("valeurDuJeu"));
        valeurDuJeu->setGeometry(QRect(10, 140, 71, 33));
        valeurDuJeu->setReadOnly(true);
        cibleActif = new QLineEdit(tab_jeu);
        cibleActif->setObjectName(QStringLiteral("cibleActif"));
        cibleActif->setGeometry(QRect(610, 160, 31, 33));
        cibleActif->setReadOnly(true);
        cibleMax = new QLineEdit(tab_jeu);
        cibleMax->setObjectName(QStringLiteral("cibleMax"));
        cibleMax->setGeometry(QRect(610, 200, 31, 33));
        cibleMax->setReadOnly(true);
        pannel1 = new QLineEdit(tab_jeu);
        pannel1->setObjectName(QStringLiteral("pannel1"));
        pannel1->setGeometry(QRect(110, 170, 71, 211));
        pannel1->setReadOnly(true);
        pannel2 = new QLineEdit(tab_jeu);
        pannel2->setObjectName(QStringLiteral("pannel2"));
        pannel2->setGeometry(QRect(190, 170, 71, 211));
        pannel2->setReadOnly(true);
        pannel3 = new QLineEdit(tab_jeu);
        pannel3->setObjectName(QStringLiteral("pannel3"));
        pannel3->setGeometry(QRect(270, 170, 71, 211));
        pannel3->setReadOnly(true);
        pannel4 = new QLineEdit(tab_jeu);
        pannel4->setObjectName(QStringLiteral("pannel4"));
        pannel4->setGeometry(QRect(350, 170, 71, 211));
        pannel4->setReadOnly(true);
        pannel5 = new QLineEdit(tab_jeu);
        pannel5->setObjectName(QStringLiteral("pannel5"));
        pannel5->setGeometry(QRect(430, 170, 71, 211));
        pannel5->setReadOnly(true);
        pannel6 = new QLineEdit(tab_jeu);
        pannel6->setObjectName(QStringLiteral("pannel6"));
        pannel6->setGeometry(QRect(510, 170, 71, 211));
        pannel6->setReadOnly(true);
        groupJoker = new QGroupBox(tab_jeu);
        groupJoker->setObjectName(QStringLiteral("groupJoker"));
        groupJoker->setGeometry(QRect(20, 390, 120, 91));
        colorJoker = new QLineEdit(groupJoker);
        colorJoker->setObjectName(QStringLiteral("colorJoker"));
        colorJoker->setGeometry(QRect(10, 30, 21, 21));
        colorJoker->setReadOnly(true);
        nbrPointJoker = new QLineEdit(groupJoker);
        nbrPointJoker->setObjectName(QStringLiteral("nbrPointJoker"));
        nbrPointJoker->setGeometry(QRect(10, 50, 51, 33));
        nbrPointJoker->setReadOnly(true);
        groupColor1 = new QGroupBox(tab_jeu);
        groupColor1->setObjectName(QStringLiteral("groupColor1"));
        groupColor1->setGeometry(QRect(100, 390, 120, 91));
        color1 = new QLineEdit(groupColor1);
        color1->setObjectName(QStringLiteral("color1"));
        color1->setGeometry(QRect(0, 20, 21, 21));
        color1->setReadOnly(true);
        nbrPoint1 = new QLineEdit(groupColor1);
        nbrPoint1->setObjectName(QStringLiteral("nbrPoint1"));
        nbrPoint1->setGeometry(QRect(0, 40, 51, 33));
        nbrPoint1->setReadOnly(true);
        groupColor2 = new QGroupBox(tab_jeu);
        groupColor2->setObjectName(QStringLiteral("groupColor2"));
        groupColor2->setGeometry(QRect(180, 390, 120, 91));
        color2 = new QLineEdit(groupColor2);
        color2->setObjectName(QStringLiteral("color2"));
        color2->setGeometry(QRect(10, 20, 21, 21));
        color2->setReadOnly(true);
        nbrPoint2 = new QLineEdit(groupColor2);
        nbrPoint2->setObjectName(QStringLiteral("nbrPoint2"));
        nbrPoint2->setGeometry(QRect(10, 40, 51, 33));
        nbrPoint2->setReadOnly(true);
        groupColor3 = new QGroupBox(tab_jeu);
        groupColor3->setObjectName(QStringLiteral("groupColor3"));
        groupColor3->setGeometry(QRect(260, 390, 120, 91));
        color3 = new QLineEdit(groupColor3);
        color3->setObjectName(QStringLiteral("color3"));
        color3->setGeometry(QRect(10, 20, 21, 21));
        color3->setReadOnly(true);
        nbrPoint3 = new QLineEdit(groupColor3);
        nbrPoint3->setObjectName(QStringLiteral("nbrPoint3"));
        nbrPoint3->setGeometry(QRect(10, 40, 51, 33));
        nbrPoint3->setReadOnly(true);
        groupColor4 = new QGroupBox(tab_jeu);
        groupColor4->setObjectName(QStringLiteral("groupColor4"));
        groupColor4->setGeometry(QRect(340, 390, 120, 91));
        color4 = new QLineEdit(groupColor4);
        color4->setObjectName(QStringLiteral("color4"));
        color4->setGeometry(QRect(10, 20, 21, 21));
        color4->setReadOnly(true);
        nbrPoint4 = new QLineEdit(groupColor4);
        nbrPoint4->setObjectName(QStringLiteral("nbrPoint4"));
        nbrPoint4->setGeometry(QRect(10, 40, 51, 33));
        nbrPoint4->setReadOnly(true);
        label_3 = new QLabel(tab_jeu);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(130, 10, 67, 21));
        label_4 = new QLabel(tab_jeu);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(280, 0, 67, 21));
        label_5 = new QLabel(tab_jeu);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(450, 0, 67, 21));
        label_6 = new QLabel(tab_jeu);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(590, 0, 67, 21));
        label_7 = new QLabel(tab_jeu);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 10, 67, 21));
        label_8 = new QLabel(tab_jeu);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(80, 80, 91, 21));
        label_9 = new QLabel(tab_jeu);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 180, 101, 21));
        label_10 = new QLabel(tab_jeu);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(600, 120, 101, 51));
        label_11 = new QLabel(tab_jeu);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(580, 240, 131, 21));
        label_12 = new QLabel(tab_jeu);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(170, 140, 301, 21));
        groupColor1_2 = new QGroupBox(tab_jeu);
        groupColor1_2->setObjectName(QStringLiteral("groupColor1_2"));
        groupColor1_2->setGeometry(QRect(440, 390, 120, 91));
        color5 = new QLineEdit(groupColor1_2);
        color5->setObjectName(QStringLiteral("color5"));
        color5->setGeometry(QRect(0, 20, 21, 21));
        color5->setReadOnly(true);
        nbrPoint5 = new QLineEdit(groupColor1_2);
        nbrPoint5->setObjectName(QStringLiteral("nbrPoint5"));
        nbrPoint5->setGeometry(QRect(0, 40, 51, 33));
        nbrPoint5->setReadOnly(true);
        groupColor1_3 = new QGroupBox(tab_jeu);
        groupColor1_3->setObjectName(QStringLiteral("groupColor1_3"));
        groupColor1_3->setGeometry(QRect(520, 390, 120, 91));
        color6 = new QLineEdit(groupColor1_3);
        color6->setObjectName(QStringLiteral("color6"));
        color6->setGeometry(QRect(0, 20, 21, 21));
        color6->setReadOnly(true);
        nbrPoint6 = new QLineEdit(groupColor1_3);
        nbrPoint6->setObjectName(QStringLiteral("nbrPoint6"));
        nbrPoint6->setGeometry(QRect(0, 40, 51, 33));
        nbrPoint6->setReadOnly(true);
        boxCR16 = new QLineEdit(tab_jeu);
        boxCR16->setObjectName(QStringLiteral("boxCR16"));
        boxCR16->setGeometry(QRect(590, 370, 113, 91));
        label_13 = new QLabel(tab_jeu);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(590, 340, 67, 21));
        varianteDeJeu = new QLineEdit(tab_jeu);
        varianteDeJeu->setObjectName(QStringLiteral("varianteDeJeu"));
        varianteDeJeu->setGeometry(QRect(10, 110, 71, 33));
        label_14 = new QLabel(tab_jeu);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(80, 110, 111, 21));
        tab->addTab(tab_jeu, QString());
        tab_server = new QWidget();
        tab_server->setObjectName(QStringLiteral("tab_server"));
        leTexte = new QLineEdit(tab_server);
        leTexte->setObjectName(QStringLiteral("leTexte"));
        leTexte->setGeometry(QRect(20, 50, 321, 33));
        cbListe = new QComboBox(tab_server);
        cbListe->setObjectName(QStringLiteral("cbListe"));
        cbListe->setGeometry(QRect(330, 120, 271, 31));
        teTexte = new QTextEdit(tab_server);
        teTexte->setObjectName(QStringLiteral("teTexte"));
        teTexte->setGeometry(QRect(10, 160, 681, 311));
        label_2 = new QLabel(tab_server);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 130, 291, 21));
        pbEnvoyer = new QPushButton(tab_server);
        pbEnvoyer->setObjectName(QStringLiteral("pbEnvoyer"));
        pbEnvoyer->setGeometry(QRect(400, 20, 181, 81));
        label = new QLabel(tab_server);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 241, 21));
        tab->addTab(tab_server, QString());
        CIhmAppServeurTcp->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CIhmAppServeurTcp);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 726, 27));
        CIhmAppServeurTcp->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CIhmAppServeurTcp);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CIhmAppServeurTcp->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CIhmAppServeurTcp);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CIhmAppServeurTcp->setStatusBar(statusBar);

        retranslateUi(CIhmAppServeurTcp);

        tab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CIhmAppServeurTcp);
    } // setupUi

    void retranslateUi(QMainWindow *CIhmAppServeurTcp)
    {
        CIhmAppServeurTcp->setWindowTitle(QApplication::translate("CIhmAppServeurTcp", "MainWindow", Q_NULLPTR));
        groupJoker->setTitle(QApplication::translate("CIhmAppServeurTcp", "Joker", Q_NULLPTR));
        groupColor1->setTitle(QApplication::translate("CIhmAppServeurTcp", "Cible 1", Q_NULLPTR));
        groupColor2->setTitle(QApplication::translate("CIhmAppServeurTcp", "Cible 2", Q_NULLPTR));
        groupColor3->setTitle(QApplication::translate("CIhmAppServeurTcp", "Cible 3", Q_NULLPTR));
        groupColor4->setTitle(QApplication::translate("CIhmAppServeurTcp", "Cible 4", Q_NULLPTR));
        label_3->setText(QApplication::translate("CIhmAppServeurTcp", "Joueur 1", Q_NULLPTR));
        label_4->setText(QApplication::translate("CIhmAppServeurTcp", "Joueur 2", Q_NULLPTR));
        label_5->setText(QApplication::translate("CIhmAppServeurTcp", "Joueur 3", Q_NULLPTR));
        label_6->setText(QApplication::translate("CIhmAppServeurTcp", "Joueur 4", Q_NULLPTR));
        label_7->setText(QApplication::translate("CIhmAppServeurTcp", "Client", Q_NULLPTR));
        label_8->setText(QApplication::translate("CIhmAppServeurTcp", "Mode de jeu", Q_NULLPTR));
        label_9->setText(QApplication::translate("CIhmAppServeurTcp", "Objectif de jeu", Q_NULLPTR));
        label_10->setText(QApplication::translate("CIhmAppServeurTcp", "Nbr de cibles", Q_NULLPTR));
        label_11->setText(QApplication::translate("CIhmAppServeurTcp", "Nbr max de cibles", Q_NULLPTR));
        label_12->setText(QApplication::translate("CIhmAppServeurTcp", "Panneau utilis\303\251 pendant la partie", Q_NULLPTR));
        groupColor1_2->setTitle(QApplication::translate("CIhmAppServeurTcp", "Cible 5", Q_NULLPTR));
        groupColor1_3->setTitle(QApplication::translate("CIhmAppServeurTcp", "Cible 6", Q_NULLPTR));
        label_13->setText(QApplication::translate("CIhmAppServeurTcp", "cr16", Q_NULLPTR));
        label_14->setText(QApplication::translate("CIhmAppServeurTcp", "Variante de jeu", Q_NULLPTR));
        tab->setTabText(tab->indexOf(tab_jeu), QApplication::translate("CIhmAppServeurTcp", "Tab 1", Q_NULLPTR));
        leTexte->setText(QString());
        label_2->setText(QApplication::translate("CIhmAppServeurTcp", "liste des clients connect\303\251s", Q_NULLPTR));
        pbEnvoyer->setText(QApplication::translate("CIhmAppServeurTcp", "envoyer", Q_NULLPTR));
        label->setText(QApplication::translate("CIhmAppServeurTcp", "\303\251coute sur le port 2222", Q_NULLPTR));
        tab->setTabText(tab->indexOf(tab_server), QApplication::translate("CIhmAppServeurTcp", "Tab 2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CIhmAppServeurTcp: public Ui_CIhmAppServeurTcp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CIHMAPPSERVEURTCP_H
