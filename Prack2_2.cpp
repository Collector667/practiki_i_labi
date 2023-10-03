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
	cout << "Введите вашу фамилию: ";
	cin >> surname;
	cout << "Введите номер вашей группы: ";
	cin >> groupNumber;
	cout << "Введите номер вашего варианта: ";
	cin >> variantNumber;
	cout << "Введите дату: ";
	cin >> date;
	cout << "Фамилия: " << surname << "\n номер группы: " << groupNumber << "      Вариант: " << variantNumber << "\n Дата: " << date;
	_getch();
	return 0;
}