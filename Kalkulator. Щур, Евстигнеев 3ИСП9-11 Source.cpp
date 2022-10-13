#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int a, b, selection;
	cout << "Ввести 2 числа:" << endl;
	cin >> a >> b;

	cout << "Выберите операцию" << endl;
	cout << "1) Сложение" << endl;
	cout << "2) Вычитание" << endl;
	cout << "3) Умножение" << endl;
	cout << "4) Деление" << endl;
	cout << "5) Деление от остатка" << endl;

	cin >> selection;

	if (selection == 1) {
		cout << "Результат: " << a + b << endl;
	}
	else if (selection == 2) {
		cout << "Результат: " << a - b << endl;
	}
	else if (selection == 3) {
		cout << "Результат: " << a * b << endl;
	}
	else if (selection == 4) {
		if (b == 0) {
			cout << "Ошибка";
		}
		else {
			cout << "Результат: " << a / b << endl;
		}
	}
	else if (selection == 5) {
		cout << "Результат: " << a % b << endl;
	}




















	return 0;
}