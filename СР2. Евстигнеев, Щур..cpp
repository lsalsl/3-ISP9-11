#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	cout << "[-]�������� ����� ����:\n";
	cout << "[1]���� \n";
	cout << "[2]���� \n";
	cout << "[3]����� \n";
	cout << "[4]����� \n";
	
	int a;
	cin >> a;
	if (a == 1)
	{
		system("cls");
		cout << "������ ����,��� �� ����";
	}

	else if (a == 2)
	{
		system("cls");
		cout << "�������� ������, �� ����� ����";
	}

	else if (a == 3)
	{
		system("cls");
		cout << "��������� � �����, ������";
	}

	else if (a == 4)
	{
		system("cls");
		cout << "������ �����, ���� �������� �����������";
	}

	else 
	{
		system("cls");
		cout << "��� ������ ������ �������, ������";
	}

	int _; 
	cin >> _ ;
	return 0;



















	return 0;
}