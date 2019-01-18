#include "dialog.h"
#include "ui_dialog.h"
#include <QDebug>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    /*���Ӱ�ť�����õ��ݵĲ�*/
    connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(configureDone()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::configureDone()
{
    //���俪ʼ���е��ݵ��ź�
    emit liftRunSignal();
    this->hide();
   //qDebug()<<"OK";
}
