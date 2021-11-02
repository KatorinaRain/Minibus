#include<iostream>
#include"class minibus.h"
#include"bus stop.h"
using namespace std;

//������� ������� �� ����� ���������: amoun_people - ���������� ����� �� ���������
void Bus_stop::print_bus_stop(int amount_people, double lat, double lon) {
	cout << "S: " << lat << endl << "D: " << lon << endl;//S - ������, D - �������
	//���� �������� ���� ��������
	for (int i = 0; i < 8; i++)
	{
		cout << "*";   
	}
	//������� ���������� �����
	if (amount_people < 10) {
		//���� ����� ������ 10-��, ����� ���� � ������
		cout << endl << "*" << "  " << "0" << amount_people << "  " << "*" << endl;
	}
	else {
		cout << endl << "*" << "  " << amount_people << "  " << "*" << endl;
	}
	//���� �������� ��� ���������
	for (int i = 0; i < 8; i++)
	{
		cout << "*";
	}
	cout << endl;
}


//������� ������� �� ����� ���������: amount_people - ���������� ����� � ���������, total_place - ����� ����
void Minibus::print_minibus(int amount_people, const int total_place, double lat, double lon) {
	cout << "S: " << lat << endl << "D: " << lon << endl;//S - ������, D - �������
	//���� �������� ���� ���������-
	for (int i = 0; i < 8; i++) {
		if (i == 0 || i == 7) {
			cout << "+";
		}
		else {
			cout << "-";
		}
	}
	//������� ���������� ����� � ��������� � ������� ����� ����
	if (amount_people < 10) {
		//���� ����� ������ 10-��, ����� ���� � ������
		cout << endl << "|" << " " << "0" << amount_people << "/" << total_place << " " << "\\" << endl;
	}
	else {
		cout << endl << "|" << " " << amount_people << "/" << total_place << " " << "\\" << endl;
	}
	//���� �������� ��� ���������
	for (int i = 0; i < 10; i++) {
		if (i == 0) {
			cout << "+";
		}
		else if (i == 1 || i == 7) {
			cout << "0";
		}
		else if (i == 9) {
			cout << "\\";
		}
		else {
			cout << "-";
		}	
	}
	cout << endl;
}

//������� ���������� ����� �� ���������
int Bus_stop::add_people() {
	amount_people = rand() % max_people;
	return amount_people;
}


 int main() {
	 Minibus a;
	 Bus_stop b(0, 100, 53, 37);
	 People q;
	 b.print_bus_stop(3, 57.35, 57.37);
	 a.print_minibus(5, 20, 57.35, 57.37);
	 //q.people_time();
	 //q.print();
	 
 }