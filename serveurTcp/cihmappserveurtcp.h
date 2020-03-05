#ifndef CIHMAPPSERVEURTCP_H
#define CIHMAPPSERVEURTCP_H

#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>
#include <QList>
#include "cserveurtcp.h"
#include "ctrame.h"

#define PORT 2222

namespace Ui {
class CIhmAppServeurTcp;
}

class CIhmAppServeurTcp : public QMainWindow
{
    Q_OBJECT

public:
    explicit CIhmAppServeurTcp(QWidget *parent = 0);
    ~CIhmAppServeurTcp();
    void afficherResumerTrame(CTrame trame);

private slots:
    void on_pbEnvoyer_clicked();
    void onEvenementServeur(QString eve);
    void onDataRecu(QString adrIpClient, QString data);
    void onErreurServeur(QAbstractSocket::SocketError err);
    void onAdrClient(QString adrClient);
    void onListeMajClients(QList<QTcpSocket *> liste);
    void onAfficherResumerTrame(CTrame *trame);


private:
    Ui::CIhmAppServeurTcp *ui;
    CServeurTcp *serv;
};

#endif // CIHMAPPSERVEURTCP_H
