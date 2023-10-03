#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <clocale>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS
#define Black 0 // черный
#define Blue 1 // синий
#define Green 2 // зеленый
#define Cyan 3 // бирюзовый
#define Red 4 // красный
#define Magenta 5 // фиолетовый
#define Brown 6 // коричневый
#define LightGray 7 // светло-серый
#define DarkGray 8 // темно-серый
#define LightBlue 9 // голубой
#define LightGreen 10 // светло-зеленый
#define LightCyan 11 // светло-бирюзовый
#define LightRed 12 // розовый
#define LightMagenta 13 // светло-фиолетовый
#define Yellow 14 // желтый
#define White 15 // белый
void gotoxy(int x, int y) // Функция перемещения курсора в заданную позицию в окне
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void SetConsoleColor(int background, int text) // Функция установки цвета фона и текста
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((background << 4) | text));
}


int main() {
	float height, radius, space;
	using namespace std;
	float numPi = 3.1415;
	system("mode con cols=80 lines=40");
	gotoxy(5, 10);
	SetConsoleColor(Green, White); // Установка цвет фона окна - светло-серый
	system("cls"); // Очистка содержимого консоли и изменение цвета фона

	setlocale(LC_ALL, "RU");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	puts("Введите высоту цилиндра: ");
	scanf_s("%f", &height);
	puts("Введите радиус цилиндра:");
	scanf_s("%f", &radius);
	space = radius * radius * numPi * height;
	printf_s("Высота цилиндра: %10.4f\nРадиус цилиндра: %10.4f\nОбъем цилиндра: %15.6e", height, radius, space);
	_getch();

	return 0;
}