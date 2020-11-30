#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_m_pbCalc_clicked()
{

}

void Dialog::on_m_pbCalc_released()
{
    QString strSum = QString::number(ui->m_lE1->text().toInt()+ui->m_lE2->text().toInt());
    ui->m_lEsum->setText(strSum);
    ui->m_lbSum->setText(strSum);
}
