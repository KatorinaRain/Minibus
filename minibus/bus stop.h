/*	1.	���� ���������� ����� �� ���������.(int amount_people)
    2.	���� int max_people(������ ������������ ���������� �����)
    3.	/*���������� (��� ������ ��������� ���� ������ � �������,��� double lat, lon )
    4.	�����������: ������������ ���������� �����, �������, ������)
    5.	������� ���������� �����(int add_people())
    6.	������� ��� ������ ��������� */

#include <iostream>
using namespace std;
int max_people = 50;
class Bus_stop {
    int amount_people = 0;
    double latitude = 0.0, longitub = 0.0;
public:
    Bus_stop(int am_peop, int max_peop, double lat, double lon) {
        amount_people = am_peop;
        max_people = max_peop;
        this->latitude = lat;
        this->longitub = lon;
    }
    int add_people();
    void print_bus_stop(int, double, double);
};

//
class People {
    int start_time = 18000;//������ 5 ����� ���� � �������� 
    int time_interval = 68400 / 900;//�� ������� �������� ��� ����� 15 ����� ,
    //�������� ���������� ��������� �� ���������
    int *human;
public:
  
};