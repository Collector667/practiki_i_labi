#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <clocale>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS
#define Black 0 // ������
#define Blue 1 // �����
#define Green 2 // �������
#define Cyan 3 // ���������
#define Red 4 // �������
#define Magenta 5 // ����������
#define Brown 6 // ����������
#define LightGray 7 // ������-�����
#define DarkGray 8 // �����-�����
#define LightBlue 9 // �������
#define LightGreen 10 // ������-�������
#define LightCyan 11 // ������-���������
#define LightRed 12 // �������
#define LightMagenta 13 // ������-����������
#define Yellow 14 // ������
#define White 15 // �����
void gotoxy(int x, int y) // ������� ����������� ������� � �������� ������� � ����
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void SetConsoleColor(int background, int text) // ������� ��������� ����� ���� � ������
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
	SetConsoleColor(Green, White); // ��������� ���� ���� ���� - ������-�����
	system("cls"); // ������� ����������� ������� � ��������� ����� ����

	setlocale(LC_ALL, "RU");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	puts("������� ������ ��������: ");
	scanf_s("%f", &height);
	puts("������� ������ ��������:");
	scanf_s("%f", &radius);
	space = radius * radius * numPi * height;
	printf_s("������ ��������: %10.4f\n������ ��������: %10.4f\n����� ��������: %15.6e", height, radius, space);
	_getch();

	return 0;
}