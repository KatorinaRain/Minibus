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
    void print_bus_stop(int, double, double);
};

//
class People {
    int start_time = 18000;//������ 5 ����� ���� � �������� 
    int time_interval = 68400 / 900;//�� ������� �������� ��� ����� 15 ����� ,
    //�������� ���������� ��������� �� ���������
    int human1;
public:
    int people_time(int human, int time) {
        for (int i = 0; i < time_interval; i++) {
            human[i] = rand() % max_people;
            human1 = human;
            return human[i];
        };
    };
    void print() {
        cout << human1;
    }
};