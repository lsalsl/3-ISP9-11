#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int a, b, selection;
	cout << "������ 2 �����:" << endl;
	cin >> a >> b;

	cout << "�������� ��������" << endl;
	cout << "1) ��������" << endl;
	cout << "2) ���������" << endl;
	cout << "3) ���������" << endl;
	cout << "4) �������" << endl;
	cout << "5) ������� �� �������" << endl;

	cin >> selection;

	if (selection == 1) {
		cout << "���������: " << a + b << endl;
	}
	else if (selection == 2) {
		cout << "���������: " << a - b << endl;
	}
	else if (selection == 3) {
		cout << "���������: " << a * b << endl;
	}
	else if (selection == 4) {
		if (b == 0) {
			cout << "������";
		}
		else {
			cout << "���������: " << a / b << endl;
		}
	}
	else if (selection == 5) {
		cout << "���������: " << a % b << endl;
	}




















	return 0;
}