#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	int a;
	cout << "Введите число: ";
	cin >> a;

	if (a < 0) {
		cout << "Ошибка. Число меньше 0." << endl;
	}
	else if (a > 100) {
		cout << "Ошибка. Число больше 100." << endl;
	}
	
	
	else if (0 <= a && a <= 10)
	{
		cout << "Число в дипазоне: 0-10" << endl;
	}
	
	
	else if (11 <= a && a <= 20)
	{
		cout << "Число в дипазоне: 11-20" << endl;
	}

	else if (21 <= a && a <= 30)
	{
		cout << "Число в дипазоне: 21-30" << endl;
	}

	else if (31 <= a && a <= 40)
	{
		cout << "Число в дипазоне: 31-40" << endl;
	}

	else if (41 <= a && a <= 50)
	{
		cout << "Число в дипазоне: 41-50" << endl;
	}

	else if (51 <= a && a <= 60)
	{
		cout << "Число в дипазоне: 51-60" << endl;
	}

	else if (61 <= a && a <= 70)
	{
		cout << "Число в дипазоне: 61-70" << endl;
	}

	else if (71 <= a && a <= 80)
	{
		cout << "Число в дипазоне: 71-80" << endl;
	}

	else if (81 <= a && a <= 90)
	{
		cout << "Число в дипазоне: 81-90" << endl;
	}

	 else if (91 <= a && a <= 100)
	{
		cout << "Число в дипазоне: 91-100" << endl;
	}
		
		
	

		
		



	return 0;
	}