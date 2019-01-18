#ifndef LIFT_H
#define LIFT_H
#include "ElevatorLift.h"
#include <Windows.h>
#include <WinUser.h>
#include <iostream>
#include <time.h>
#include <QTime>

#include "Passenger.h"
#include "Group.h"
#include "mainwindow.h"
class myLift{
public:
    myLift();

    //�趨ȫ�ֱ���
    ElevatorLift  * E[10];                //����ָ��
    Passenger     * P[1000];              //�˿�ָ��
    Group         * G[5];                 //������ָ��
    Time Nowtime;
    int K = 13;                   //���ݵ�����ؿ�����         10<K<18
    int N = 200;                 //�˿�����                   0<N<1000
    int M = 0;                  //��ʼ�ȴ�ʱ��    �����ӣ�   0<M<10
    int L = 4;                   //�˿͵ĳ��ݴ���             1<L<10
    int S = 1;                   //�����ٶ�    ��λ :��/��    1<s<5
    int T = 1;                   //�˿����µ��ݵ�ʱ��         2<T<10

private:
    friend class MainWindow;
};

void myTimerProc(myLift* l);

#endif // LIFT_H
