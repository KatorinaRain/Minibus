/*	1.	���� ���������� ����� �� ���������.(int amount_people)
    2.	���� int max_people(������ ������������ ���������� �����)
    3.	/*���������� (��� ������ ��������� ���� ������ � �������,��� double lat, lon )
    4.	�����������: ������������ ���������� �����, �������, ������)
    5.	������� ���������� �����(int add_people())
    6.	������� ��� ������ ��������� */

#include <iostream>
using namespace std;

class Bus_stop {
    int amount_people;
    int max_people;
    double lat;
    double lon;
public:
    Bus_stop(int am_peop, int max_peop, double lat, double lon) {
        amount_people = am_peop;
        max_people = max_peop;
        lat = lat;
        lon = lon;
    }
};
