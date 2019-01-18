#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}
/*�������Ҫ������ȡ�û�����ĵ���ϵͳ��������ʼ������ϵͳ��������*/
class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

signals:
    void liftRunSignal();

private:
    Ui::Dialog *ui;

private slots:
    void configureDone();

};

#endif // DIALOG_H
