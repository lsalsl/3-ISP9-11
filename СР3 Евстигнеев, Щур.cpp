#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	int a;
	cout << "������� �����: ";
	cin >> a;

	if (a < 0) {
		cout << "������. ����� ������ 0." << endl;
	}
	else if (a > 100) {
		cout << "������. ����� ������ 100." << endl;
	}
	
	
	else if (0 <= a && a <= 10)
	{
		cout << "����� � ��������: 0-10" << endl;
	}
	
	
	else if (11 <= a && a <= 20)
	{
		cout << "����� � ��������: 11-20" << endl;
	}

	else if (21 <= a && a <= 30)
	{
		cout << "����� � ��������: 21-30" << endl;
	}

	else if (31 <= a && a <= 40)
	{
		cout << "����� � ��������: 31-40" << endl;
	}

	else if (41 <= a && a <= 50)
	{
		cout << "����� � ��������: 41-50" << endl;
	}

	else if (51 <= a && a <= 60)
	{
		cout << "����� � ��������: 51-60" << endl;
	}

	else if (61 <= a && a <= 70)
	{
		cout << "����� � ��������: 61-70" << endl;
	}

	else if (71 <= a && a <= 80)
	{
		cout << "����� � ��������: 71-80" << endl;
	}

	else if (81 <= a && a <= 90)
	{
		cout << "����� � ��������: 81-90" << endl;
	}

	 else if (91 <= a && a <= 100)
	{
		cout << "����� � ��������: 91-100" << endl;
	}
		
		
	

		
		



	return 0;
	}