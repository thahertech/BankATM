#include "menupage.h"
#include "saldoform.h"
#include "nostoform.h"
#include "ui_menupage.h"

#include "tapahtumatform.h"
#include "talletusform.h"
#include "mysingleton.h"
#include <QString>

#include <signoutform.h>
#include "siirtoform.h"


MenuPage::MenuPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuPage)
{
    ui->setupUi(this);


}
MenuPage::~MenuPage()
{
        delete ui;
}





void MenuPage::on_btnOpenNosto_clicked() //Withdraw
{
    NostoForm *nff= new NostoForm();
    nff->show();

    this->close();




}

void MenuPage::on_btnOpenSaldo_clicked() //Balance
{
    SaldoForm *sfm= new SaldoForm();
    sfm->show();

    this->close();

}

void MenuPage::on_btnOpenTapahtumat_clicked() //Transactions
{
    TapahtumatForm *tff= new TapahtumatForm();
    tff->show();

    this->close();
}

void MenuPage::on_btnOpenTalletus_clicked() //Money Input
{
   TalletusForm *ttt= new TalletusForm();
   ttt->show();

   this->close();
}

void MenuPage::on_btnCloseMenuPage_clicked() //Close MenuPage
{
    this->close();

    SignOutForm *sof = new SignOutForm();
    sof->show();

}


void MenuPage::on_btnOpenSiirto_clicked() //Transfer Funds
{
    SiirtoForm *sf= new SiirtoForm();
    sf->show();

    this->close();
}
