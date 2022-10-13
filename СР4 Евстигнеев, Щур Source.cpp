#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	int a;
	int otvetik = 0;
	cout << "Введите число: ";
	cin >> a;
	for (int i = 1; i <= 9; i++) {
		cout << "Решите пример:" << a << "x" << i << endl;
		cout << "Ответ: ";
		cin >> otvetik;
		if (i == 9 and otvetik == a * i) {
			cout << "Примеры решены, вы молодец!";
			break;
		}
		if (otvetik == a * i) {
			cout << "Пример решен правильно!" << endl;
		}
		else {
			cout << "Ошибка, пример решен неверно!";
			break;
		}
	}
	
	
	

return 0;
}