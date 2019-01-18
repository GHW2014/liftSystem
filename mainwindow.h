#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
namespace Ui {
class MainWindow;
}
/*���ݵ������棬��Ҫ��ʾ���ݵ�ʵʱ״̬�Լ�ͳ�Ƶ����ܵ����кͿ���ʱ��*/
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QTimer *timer;
    void showLiftState();//��ʾ��������״̬
    void timeOutHandl();//��ʱ�����������
    friend class myLift;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    int id;
    Ui::MainWindow *ui;
    void setLabelColor();
    virtual void timerEvent( QTimerEvent *event);

private slots:

    void summaryLift();//ͳ�ƿ���ʱ��
    void configureLift();//���õ���
    void liftRun();//���ݿ�ʼ����
};

#endif // MAINWINDOW_H
