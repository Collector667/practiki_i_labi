#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <clocale>
#include <windows.h>
#include <list>
#include <math.h>
int main() {
	using namespace std;
	setlocale(LC_ALL, "RU");
	int chislo1, chislo2, border, border1, schislen = 10;
	border = 1000; //внешняя граница
	border1 = 100; //внутренная граница
	cout << "Введите трехзначное число: ";
	std::cin >> chislo1;
	if ((chislo1 < border) and (chislo1 > -border) and ((chislo1 >= border1) or (chislo1 <= -border1))) {
		int num1, num2, num3, minChislo, count, proverka;
		string vihZnak;
		std::list<int> listNums;
		if (chislo1 < 0) {
			chislo1 = -chislo1;
			vihZnak = "-";
		}

		while (chislo1 > 0) {
			listNums.push_back(chislo1 % schislen);
			chislo1 = chislo1 / schislen;
		}
		std::cout << "Выходное число: " << vihZnak;
		for (int i : listNums) {
			cout << i;
		}
	}
	else {
		std::cout << "Вы ввели не трехзначное число";
	}
	int chislo3, chislo4 = 1, border2, border3;
	std::cout << " \nВведите четырехзначное число: ";
	std::cin >> chislo3;
	border2 = 10000; //внешняя граница
	border3 = 100; //внутренная граница
	chislo3 = sqrt(chislo3 * chislo3);
	if ((chislo3 >= border3) and (chislo3 < border2))  {
		std::list<int> listNumss;
		while (chislo3 > 0) {
			listNumss.push_back(chislo3 % schislen);
			chislo3 = chislo3 / schislen;
		}
		for (int i : listNumss) {
			chislo4 = chislo4 * i;
		}
		std::cout << "Произведение: " << chislo4;
	}
	else {
		std::cout << "Вы ввели не четырехзначное число";
	}

}
