#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	short question = 0;
	string name;
	short usless;
	while (true)
	{
		system("cls");
		cout << "���� ���: " << name << "\n";
		cout << "[1] ������ ����\n";
		cout << "[2] ���������\n";
		cout << "[3] �������\n";
		cout << "[4] �����\n\n";
		cout << "[+] �������: ";

		short score = 0;
		short health = 3;
		string menu;
		short exit;
		string question1 = "���������� ��� ������";
		string question2 = "����� ������ ������ ���������� ��� int";
		string question3 = "�� ����� ����� ��� ���������";
		string question4 = "���������� ��� ������";
		string question5 = "����� ������ ������ ���������� ��� double";
		string question6 = "�������� ������������";
		string question7 = "����� ������ ������ ���������� ��� short";
		string question8 = "���������� �������������";
		string question9 = "����� ������ ������ ���������� ��� long";
		string question10 = "������� ��� �����";
		string question11 = "����� ������ ������ ���������� ��� char";
		string question12 = "������� ��� ������";

		cin >> menu;
		if (menu == "1")
		{
			if (name == "")
			{
				int asd;
				system("cls");
				cout << "������� ��� � ���������� �������� � ����������\n";
				cout << "[1] �����\n";
				cin >> asd;
				if (asd == 1)
				{
					continue;
				}
			}
			else
			{
				if (question == 5)
				{
					system("cls");
					int answer1;
					cout << "���� ���: " << name << endl;
					cout << "����: " << score << endl;
					cout << "���� �����: " << health << endl;
					cout << question1 << endl;
					cout << "�������� �������: \n";
					cout << "[1] bool\n";
					cout << "[2] int\n";
					cout << "[3] char\n\n";
					cout << "��� �����: ";
					cin >> answer1;
					if (answer1 == 1)
					{
						score = score + 1;
					}
					else
					{
						health = health - 1;
					}
					if (health < 1)
					{
						system("cls");
						cout << "�� ���������! " << "���� ����: " << score << endl;
						cout << "[1] �����\n";
						cout << "�������:";
						cin >> usless;
						if (usless == 1)
						{
							continue;
						}
						if (!cin)
						{
							cin.clear();
							cin.get();
						}
					}
					else
					{
						system("cls");
						int answer2;
						cout << "���� ���: " << name << endl;
						cout << "����: " << score << endl;
						cout << "���� �����: " << health << endl;
						cout << question2 << endl;
						cout << "�������� �������: \n";
						cout << "[1] 1b\n";
						cout << "[2] 4b\n";
						cout << "[3] 8b\n\n";
						cout << "��� �����: ";
						cin >> answer2;
						if (answer2 == 2)
						{
							score = score + 1;
						}
						else
						{
							health = health - 1;
						}
					}
					system("cls");
					int answer3;
					cout << "���� ���: " << name << endl;
					cout << "����: " << score << endl;
					cout << "���� �����: " << health << endl;
					cout << question3 << endl;
					cout << "�������� �������: \n";
					cout << "[1] Pascal\n";
					cout << "[2] Python\n";
					cout << "[3] C++\n\n";
					cout << "��� �����: ";
					cin >> answer3;

					if (answer3 == 3)
					{
						score = score + 1;
					}
					else
					{
						health = health - 1;
					}
					if (health < 1)
					{
						system("cls");
						cout << "�� ���������! " << "���� ����: " << score << endl;
						cout << "[1] �����\n";
						cout << "�������:";
						cin >> usless;
						if (usless == 1)
						{
							continue;
						}
						if (!cin)
						{
							cin.clear();
							cin.get();
						}
					}
					else
					{
						system("cls");
						int answer4;
						cout << "���� ���: " << name << endl;
						cout << "����: " << score << endl;
						cout << "���� �����: " << health << endl;
						cout << question4 << endl;
						cout << "�������� �������: \n";
						cout << "[1] char\n";
						cout << "[2] double\n";
						cout << "[3] short\n\n";
						cout << "��� �����: ";
						cin >> answer4;
						if (answer4 == 1)
						{
							score = score + 1;
						}
						else
						{
							health = health - 1;
						}
					}
					if (health < 1)
					{
						system("cls");
						cout << "�� ���������! " << "���� ����: " << score << endl;
						cout << "[1] �����\n";
						cout << "�������:";
						cin >> usless;
						if (usless == 1)
						{
							continue;
						}
						if (!cin)
						{
							cin.clear();
							cin.get();
						}
					}
					else
					{
						system("cls");
						int answer5;
						cout << "���� ���: " << name << endl;
						cout << "����: " << score << endl;
						cout << "���� �����: " << health << endl;
						cout << question5 << endl;
						cout << "�������� �������: \n";
						cout << "[1] 4b\n";
						cout << "[2] 8b\n";
						cout << "[3] 16b\n\n";
						cout << "��� �����: ";
						cin >> answer5;
						if (answer5 == 2)
						{
							score = score + 1;
						}
						else
						{
							health = health - 1;
						}
					}
					if (health < 1)
					{
						system("cls");
						cout << "�� ���������! " << "���� ����: " << score << endl;
						cout << "[1] �����\n";
						cout << "�������:";
						cin >> usless;
						if (usless == 1)
						{
							continue;
						}
						if (!cin)
						{
							cin.clear();
							cin.get();
						}
					}
					else
					{
						int n;
						cout << "�� ��������! � ���: " << score << " �����\n";
						cout << "[1] ����� � ����";
						cin >> n;
						if (n == 1)
						{
							continue;
						}
						if (!cin)
						{
							cin.clear();
							cin.get();
						}
					}
				}
				if (question == 12)
				{
					system("cls");
					int answer1;
					cout << "���� ���: " << name << endl;
					cout << "����: " << score << endl;
					cout << "���� �����: " << health << endl;
					cout << question1 << endl;
					cout << "�������� �������: \n";
					cout << "[1] bool\n";
					cout << "[2] int\n";
					cout << "[3] char\n\n";
					cout << "��� �����: ";
					cin >> answer1;
					if (answer1 == 1)
					{
						score = score + 1;
					}
					else
					{
						health = health - 1;
					}
					system("cls");
					int answer2;
					cout << "���� ���: " << name << endl;
					cout << "����: " << score << endl;
					cout << "���� �����: " << health << endl;
					cout << question2 << endl;
					cout << "�������� �������: \n";
					cout << "[1] 1b\n";
					cout << "[2] 4b\n";
					cout << "[3] 8b\n\n";
					cout << "��� �����: ";
					cin >> answer2;
					if (answer2 == 2)
					{
						score = score + 1;
					}
					else
					{
						health = health - 1;
					}
					system("cls");
					int answer3;
					cout << "���� ���: " << name << endl;
					cout << "����: " << score << endl;
					cout << "���� �����: " << health << endl;
					cout << question3 << endl;
					cout << "�������� �������: \n";
					cout << "[1] Pascal\n";
					cout << "[2] Python\n";
					cout << "[3] C++\n\n";
					cout << "��� �����: ";
					cin >> answer3;

					if (answer3 == 3)
					{
						score = score + 1;
					}
					else
					{
						health = health - 1;
					}
					if (health < 1)
					{
						system("cls");
						cout << "�� ���������! " << "���� ����: " << score << endl;
						cout << "[1] �����\n";
						cout << "�������:";
						cin >> usless;
						if (usless == 1)
						{
							continue;
						}
						if (!cin)
						{
							cin.clear();
							cin.get();
						}
					}
					else
					{
						system("cls");
						int answer4;
						cout << "���� ���: " << name << endl;
						cout << "����: " << score << endl;
						cout << "���� �����: " << health << endl;
						cout << question4 << endl;
						cout << "�������� �������: \n";
						cout << "[1] char\n";
						cout << "[2] double\n";
						cout << "[3] short\n\n";
						cout << "��� �����: ";
						cin >> answer4;
						if (answer4 == 1)
						{
							score = score + 1;
						}
						else
						{
							health = health - 1;
						}
					}
					if (health < 1)
					{
						system("cls");
						cout << "�� ���������! " << "���� ����: " << score << endl;
						cout << "[1] �����\n";
						cout << "�������:";
						cin >> usless;
						if (usless == 1)
						{
							continue;
						}
						if (!cin)
						{
							cin.clear();
							cin.get();
						}
					}
					else
					{
						system("cls");
						int answer5;
						cout << "���� ���: " << name << endl;
						cout << "����: " << score << endl;
						cout << "���� �����: " << health << endl;
						cout << question5 << endl;
						cout << "�������� �������: \n";
						cout << "[1] 4b\n";
						cout << "[2] 8b\n";
						cout << "[3] 16b\n\n";
						cout << "��� �����: ";
						cin >> answer5;
						if (answer5 == 2)
						{
							score = score + 1;
						}
						else
						{
							health = health - 1;
						}
					}
					if (health < 1)
					{
						system("cls");
						cout << "�� ���������! " << "���� ����: " << score << endl;
						cout << "[1] �����\n";
						cout << "�������:";
						cin >> usless;
						if (usless == 1)
						{
							continue;
						}
						if (!cin)
						{
							cin.clear();
							cin.get();
						}
					}
					else
					{
						system("cls");
						int answer6;
						cout << "���� ���: " << name << endl;
						cout << "����: " << score << endl;
						cout << "���� �����: " << health << endl;
						cout << question6 << endl;
						cout << "�������� �������: \n";
						cout << "[1] ==\n";
						cout << "[2] -\n";
						cout << "[3] =\n\n";
						cout << "��� �����: ";
						cin >> answer6;
						if (answer6 == 3)
						{
							score = score + 1;
						}
						else
						{
							health = health - 1;
						}
					}
					if (health < 1)
					{
						system("cls");
						cout << "�� ���������! " << "���� ����: " << score << endl;
						cout << "[1] �����\n";
						cout << "�������:";
						cin >> usless;
						if (usless == 1)
						{
							continue;
						}
						if (!cin)
						{
							cin.clear();
							cin.get();
						}
					}
					else
					{
						system("cls");
						int answer7;
						cout << "���� ���: " << name << endl;
						cout << "����: " << score << endl;
						cout << "���� �����: " << health << endl;
						cout << question7 << endl;
						cout << "�������� �������: \n";
						cout << "[1] 3b\n";
						cout << "[2] 2b\n";
						cout << "[3] 1b\n\n";
						cout << "��� �����: ";
						cin >> answer7;
						if (answer7 == 2)
						{
							score = score + 1;
						}
						else
						{
							health = health - 1;
						}
					}
					if (health < 1)
					{
						system("cls");
						cout << "�� ���������! " << "���� ����: " << score << endl;
						cout << "[1] �����\n";
						cout << "�������:";
						cin >> usless;
						if (usless == 1)
						{
							continue;
						}
						if (!cin)
						{
							cin.clear();
							cin.get();
						}
					}
					else
					{
						system("cls");
						int answer8;
						cout << "���� ���: " << name << endl;
						cout << "����: " << score << endl;
						cout << "���� �����: " << health << endl;
						cout << question8 << endl;
						cout << "�������� �������: \n";
						cout << "[1] int A = 10\n";
						cout << "[2] A int = 10\n";
						cout << "[3] 10 = int A\n\n";
						cout << "��� �����: ";
						cin >> answer8;
						if (answer8 == 1)
						{
							score = score + 1;
						}
						else
						{
							health = health - 1;
						}
					}
					if (health < 1)
					{
						system("cls");
						cout << "�� ���������! " << "���� ����: " << score << endl;
						cout << "[1] �����\n";
						cout << "�������:";
						cin >> usless;
						if (usless == 1)
						{
							continue;
						}
						if (!cin)
						{
							cin.clear();
							cin.get();
						}
					}
					else
					{
						system("cls");
						int answer9;
						cout << "���� ���: " << name << endl;
						cout << "����: " << score << endl;
						cout << "���� �����: " << health << endl;
						cout << question9 << endl;
						cout << "�������� �������: \n";
						cout << "[1] 4b\n";
						cout << "[2] 2b\n";
						cout << "[3] 32b\n\n";
						cout << "��� �����: ";
						cin >> answer9;
						if (answer9 == 1)
						{
							score = score + 1;
						}
						else
						{
							health = health - 1;
						}
					}
					if (health < 1)
					{
						system("cls");
						cout << "�� ���������! " << "���� ����: " << score << endl;
						cout << "[1] �����\n";
						cout << "�������:";
						cin >> usless;
						if (usless == 1)
						{
							continue;
						}
						if (!cin)
						{
							cin.clear();
							cin.get();
						}
					}
					else
					{
						system("cls");
						int answer10;
						cout << "���� ���: " << name << endl;
						cout << "����: " << score << endl;
						cout << "���� �����: " << health << endl;
						cout << question10 << endl;
						cout << "�������� �������: \n";
						cout << "[1] Cin\n";
						cout << "[2] Cout\n";
						cout << "[3] Endl\n\n";
						cout << "��� �����: ";
						cin >> answer10;
						if (answer10 == 1)
						{
							score = score + 1;
						}
						else
						{
							health = health - 1;
						}
					}
					if (health < 1)
					{
						system("cls");
						cout << "�� ���������! " << "���� ����: " << score << endl;
						cout << "[1] �����\n";
						cout << "�������:";
						cin >> usless;
						if (usless == 1)
						{
							continue;
						}
						if (!cin)
						{
							cin.clear();
							cin.get();
						}
					}
					else
					{
						system("cls");
						int answer11;
						cout << "���� ���: " << name << endl;
						cout << "����: " << score << endl;
						cout << "���� �����: " << health << endl;
						cout << question11 << endl;
						cout << "�������� �������: \n";
						cout << "[1] 4b\n";
						cout << "[2] 12b\n";
						cout << "[3] 1b\n\n";
						cout << "��� �����: ";
						cin >> answer11;
						if (answer11 == 3)
						{
							score = score + 1;
						}
						else
						{
							health = health - 1;
						}
					}
					if (health < 1)
					{
						system("cls");
						cout << "�� ���������! " << "���� ����: " << score << endl;
						cout << "[1] �����\n";
						cout << "�������:";
						cin >> usless;
						if (usless == 1)
						{
							continue;
						}
						if (!cin)
						{
							cin.clear();
							cin.get();
						}
					}
					else
					{
						system("cls");
						int answer12;
						cout << "���� ���: " << name << endl;
						cout << "����: " << score << endl;
						cout << "���� �����: " << health << endl;
						cout << question12 << endl;
						cout << "�������� �������: \n";
						cout << "[1] Cin\n";
						cout << "[2] Cout\n";
						cout << "[3] Endl\n\n";
						cout << "��� �����: ";
						cin >> answer12;
						if (answer12 == 2)
						{
							score = score + 1;
						}
						else
						{
							health = health - 1;
						}
					}
					if (health < 1)
					{
						system("cls");
						cout << "�� ���������! " << "���� ����: " << score << endl;
						cout << "[1] �����\n";
						cout << "�������:";
						cin >> usless;
						if (usless == 1)
						{
							continue;
						}
						if (!cin)
						{
							cin.clear();
							cin.get();
						}
					}
					else
					{
						int n;
						cout << "�� ��������! � ���: " << score << " �����\n";
						cout << "[1] ����� � ����";
						cin >> n;
						if (n == 1)
						{
							continue;
						}

					}
				}
				if (question == 0)
				{
					int qwe;
					system("cls");
					cout << "������� ��� � ���������� �������� � ����������\n";
					cout << "[1] �����\n";
					cin >> qwe;
					if (qwe == 1)
					{
						continue;
					}
					if (!cin)
					{
						cin.clear();
						cin.get();
					}
				}
			}
		}
		if (menu == "3")
		{
			system("cls");
			cout << "�������:\n";
			cout << "�� ������ ���������� ����� �� ��������� ���� ����\n";
			cout << "�� ������� �� ���������� ����� � ��� ���������� ���� �����\n";
			cout << "�����!\n\n";
			cout << "[1] �����\n\n";
			cout << "[+] �������: ";
			cin >> exit;
			if (exit == 1)
			{
				continue;
			}
		}
		if (menu == "4")
		{
			return 0;
		}
		if (menu == "2")
		{
			system("cls");
			cout << "���������:\n\n";
			cout << "[1] ����\n";
			cout << "[2] ���-�� ��������\n";
			cout << "[3] ��� ������\n";
			cout << "[4] �����\n\n";
			cout << "[+]�������: ";

			string settings;
			short colors;
			cin >> settings;
			if (settings == "1")
			{
				system("cls");
				cout << "������� ����:\n\n";
				cout << "[1] Ƹ����\n";
				cout << "[2] �������\n";
				cout << "[3] �������\n";
				cout << "[4] �����\n";
				cout << "[5] ����������\n\n";
				cout << "[+]�������: ";
				cin >> colors;
				if (colors == 1)
				{
					system("color 0E");
				}
				if (colors == 2)
				{
					system("color 02");
				}
				if (colors == 3)
				{
					system("color 04");
				}
				if (colors == 4)
				{
					system("color 01");
				}
				if (colors == 5)
				{
					system("color 05");
				}
			}
			if (settings == "2")
			{
				short abc;
				system("cls");
				cout << "������� ���-�� ��������:\n\n";
				cout << "[1] 5\n";
				cout << "[2] 12\n\n";
				cout << "[+] �������: ";
				cin >> abc;
				if (abc == 1)
				{
					question = 5;
				}
				if (abc == 2)
				{
					question = 12;
				}
			}
			if (settings == "3")
			{
				system("cls");
				cout << "[+] ������� ��� ������: \n";
				cin >> name;
				continue;
			}
			if (settings == "4")
			{
				continue;
			}
		}
		if (!cin)
		{
			cin.clear();
			cin.get();
		}
	}
}