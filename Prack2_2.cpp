#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <clocale>
#include <windows.h>
int main() {
	using namespace std;
	setlocale(LC_ALL, "RU");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int groupNumber, variantNumber;
	string surname, date;
	cout << "������� ���� �������: ";
	cin >> surname;
	cout << "������� ����� ����� ������: ";
	cin >> groupNumber;
	cout << "������� ����� ������ ��������: ";
	cin >> variantNumber;
	cout << "������� ����: ";
	cin >> date;
	cout << "�������: " << surname << "\n ����� ������: " << groupNumber << "      �������: " << variantNumber << "\n ����: " << date;
	_getch();
	return 0;
}