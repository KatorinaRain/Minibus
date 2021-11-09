#include<iostream>
#include"class minibus.h"
#include"bus stop.h"
#include <string>
using namespace std;

//������� ������� �� ����� ���������: amoun_people - ���������� ����� �� ���������
string Bus_stop::print_bus_stop(int amount_people, double lat, double lon) {
	string str;
	//cout << "S: " << lat << endl << "D: " << lon << endl;//S - ������, D - �������
	str += 'S';
	str += ':';
	str += ' ';
	str += '0';
	str += '0';
	str += '.';
	str += '0';
	str += '0';
	str += ' ';
	str += 'D';
	str += ':';
	str += ' ';
	str += '0';
	str += '0';
	str += '.';
	str += '0';
	str += '0';
	str += ' ';
	//���� �������� ���� ��������
	for (int i = 0; i < 8; i++)
	{
		//cout << "*"; 
		str += '*';
	}
	//������� ���������� �����
	if (amount_people < 10) {
		//���� ����� ������ 10-��, ����� ���� � ������
		//cout << endl << "*" << "  " << "0" << amount_people << "  " << "*" << endl;
	}
	else {
		//cout << endl << "*" << "  " << amount_people << "  " << "*" << endl;
	}
	str += '*';
	str += ' ';
	str += '0';
	str += '0';
	str += ' ';
	str += '*';
	//���� �������� ��� ���������
	for (int i = 0; i < 8; i++)
	{
		//cout << "*";
		str += '*';
	}
	cout << endl;
	
	return str;
}


//������� ������� �� ����� ���������: amount_people - ���������� ����� � ���������, total_place - ����� ����
string Minibus::print_minibus(int amount_people, const int total_place, double lat, double lon) {
	string str;
	//cout << "S: " << lat << endl << "D: " << lon << endl;//S - ������, D - �������
	str += 'S';
	str += ':';
	str += ' ';
	str += '0';
	str += '0';
	str += '.';
	str += '0';
	str += '0';
	str += ' ';
	str += 'D';
	str += ':';
	str += ' ';
	str += '0';
	str += '0';
	str += '.';
	str += '0';
	str += '0';
	str += ' ';

	//���� �������� ���� ���������-
	for (int i = 0; i < 8; i++) {
		if (i == 0 || i == 7) {
			//cout << "+";
			str += '+';
		}
		else {
			//cout << "-";
			str += '-';
		}
	}
	//������� ���������� ����� � ��������� � ������� ����� ����
	if (amount_people < 10) {
		//���� ����� ������ 10-��, ����� ���� � ������
		//cout << endl << "|" << " " << "0" << amount_people << "/" << total_place << " " << "\\" << endl;
	}
	else {
		//cout << endl << "|" << " " << amount_people << "/" << total_place << " " << "\\" << endl;
	}
	str += '|';
	str += ' ';
	str += '0';
	str += '0';
	str += '/';
	str += '0';
	str += '0';
	str += ' ';
	str += '\\';
	//���� �������� ��� ���������
	for (int i = 0; i < 10; i++) {
		if (i == 0) {
			//cout << "+";
			str += '+';
		}
		else if (i == 1 || i == 7) {
			//cout << "0";
			str += '0';
		}
		else if (i == 9) {
			//cout << "\\";
			str += '\\';
		}
		else {
			//cout << "-";
			str += '-';
		}	
	}
	cout << endl;	
	return str;
}
void test( string str1, string str2) {
	
	
	if (str1.size() == str2.size()& (str1.compare(str2) == 0)){
		//(str1.compare(str2) != 0);
		cout << "prpgramma rabotaet" << endl;
		cout << str1.compare(str2) << "sadf";
		cout << str1.size() << str2.size();

	}
	else {
		cout << "prpgramma ne rabotaet" << endl;
		cout << str1.size() << str2.size();
	}


}


 int main() {
	 Minibus a;
	 string minibus, ostanovka;//��� �������� ��������� � ��������� � ���� ������
	 Bus_stop b(0, 100, 53, 37);
	 ostanovka = b.print_bus_stop(3, 57.35, 57.37);
	 minibus = a.print_minibus(5, 20, 57.35, 57.37);
	cout << ostanovka << endl;//������� ��������� � ������
	 //cout << minibus << endl;//������� ��������� � ������
	 string eee = "S: 00.00 D: 00.00 ********* 00 *********";
	 test(ostanovka,eee);
 }
 // S: 00.00 D: 00.00 ********* 00 *********
 // S: 00.00 D: 00.00 +------+| 00/00 \+0-----0-\