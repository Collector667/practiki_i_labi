#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <clocale>
#include <windows.h>
#include <math.h>
#include <list>
int main() {
	setlocale(LC_ALL, "RU");
	using namespace std;
	float coorX, coorY, radius, radiusVec;
	int chetvert = 0;
	cout << "Введите радиус окружности: ";
	cin >> radius;
	cout << "\nВведите координату по Х: ";
	cin >> coorX;
	cout << "\nВведите координату по У: ";
	cin >> coorY;
	radiusVec = sqrt(coorX * coorX + coorY * coorY);
	if (radius >= 0) {
		if ((((coorX >= 0) and (coorY >= 0)) and ((coorX == 0) or ((coorY == 0) and (radius <= radiusVec)) or
			(((coorX <= 0) and (coorY >= 0)) and ((coorX == 0) or ((coorY == 0) and (radiusVec <= radius)))) or
			((((coorX <= 0) and (coorY <= 0)) and ((radius == radiusVec) or (((coorX == 0) or (coorY == 0) and (radius > radiusVec)))))) or
			((((coorX >= 0) and (coorY <= 0)) and ((radius == radiusVec) or (((coorX == 0) or (coorY == 0) and (radius > radiusVec))))))))) {
			cout << "Точна на границе";
		}
		else if ((((coorY == 0) and (radius > radiusVec)) or ((coorX > 0) and (coorY > 0)) or (((coorX < 0) and (coorY < 0)) and (radius > radiusVec))) or
			(((coorX > 0) and (coorY < 0)) and (radius > radiusVec))) {
			cout << "Точка в области";

		}
		else {
			cout << "Точка вне области";
		}




	}
	else {
		cout << "Радиус не может быть отрицательным";
	}
	
	return 0;
}