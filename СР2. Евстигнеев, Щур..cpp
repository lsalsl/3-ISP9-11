#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	cout << "[-]Выберите время года:\n";
	cout << "[1]Лето \n";
	cout << "[2]Зима \n";
	cout << "[3]Осень \n";
	cout << "[4]Весна \n";
	
	int a;
	cin >> a;
	if (a == 1)
	{
		system("cls");
		cout << "Сейчас лето,иди на пляж";
	}

	else if (a == 2)
	{
		system("cls");
		cout << "Одевайся теплее, на улице снег";
	}

	else if (a == 3)
	{
		system("cls");
		cout << "Собирайся в школу, ученик";
	}

	else if (a == 4)
	{
		system("cls");
		cout << "Сейчас весна, беги собирать подснежники";
	}

	else 
	{
		system("cls");
		cout << "Тут только четыре циферки, прости";
	}

	int _; 
	cin >> _ ;
	return 0;



















	return 0;
}