#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	int a;
	int otvetik = 0;
	cout << "������� �����: ";
	cin >> a;
	for (int i = 1; i <= 9; i++) {
		cout << "������ ������:" << a << "x" << i << endl;
		cout << "�����: ";
		cin >> otvetik;
		if (i == 9 and otvetik == a * i) {
			cout << "������� ������, �� �������!";
			break;
		}
		if (otvetik == a * i) {
			cout << "������ ����� ���������!" << endl;
		}
		else {
			cout << "������, ������ ����� �������!";
			break;
		}
	}
	
	
	

return 0;
}