#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <clocale>
#include <windows.h>
#include <list>
#include <math.h>

using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	float coorX, coorY, radius, radiusVec;
	int chetvert = 0;
	cout << "������� ������ ����������: ";
	cin >> radius;
	cout << "\n������� ���������� �� �: ";
	cin >> coorX;
	cout << "\n������� ���������� �� �: ";
	cin >> coorY;
	radiusVec = sqrt(coorX * coorX + coorY * coorY);
	float coor[]{ coorX, coorY };

	if (coorX - abs(coorX)) {
		chetvert++;
	}
	if (coorY - abs(coorY)) {
		chetvert += 3 - 2 * chetvert;
	}

	cout << chetvert;

	switch (chetvert) {
	case (0):
		if ((coorX == 0) or (coorY == 0)) {
			cout << "����� ��������� �� �������";
		}
		else {
			cout << "����� ��������� �� �������������� �������";
		}
	case (1):
		if (((coorX == 0) or (coorY == 0)) and (radius >= radiusVec)) {
			cout << "����� ��������� �� �������";
		}
		else {
			cout << "����� ��� �������";
		}
	case (2):
		if ((radius == radiusVec) or (coorX == 0) or (coorY == 0)) {
			cout << "����� �� ������� ";
		}
		else if (radius > radiusVec) {
			cout << "����� ��������� �� �������������� �������";
		}
		else {
			cout << "����� ��� �������";
		}
	case (3):
		if ((radius == radiusVec) or (coorX == 0) or (coorY == 0)) {
			cout << "����� �� �������";
		}
		else if (radius > radiusVec) {
			cout << "����� ��������� �� �������������� �������";
		}
		else {
			cout << "����� ��� �������";
		}
		}

		return 0;


	}
