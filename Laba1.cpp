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
	int chisloVhod, limitTri, schislen = 10, razryad = 3;
	int  chisloVih = 0;
	limitTri = pow(schislen, razryad); // Введите нужный разряд
	cout << "Введите трехзначное число: ";
	std::cin >> chisloVhod;
	if ((abs(chisloVhod) < (schislen * limitTri) and ((abs(chisloVhod) >= (limitTri / schislen))))) {

		bool vihZnak = 1;
		std::list<int> listNums;
		if (chisloVhod < 0) {
			chisloVhod = -chisloVhod;
			vihZnak = 0;
		}

		while (chisloVhod > 0) {
			listNums.push_back(chisloVhod % schislen);
			chisloVhod = chisloVhod / schislen;
		}

		std::cout << "Выходное число: ";
		int size = listNums.size();
		for (int i = 1; i <= size; i++) {
			chisloVih += listNums.front() * pow(schislen, (razryad - i));

			listNums.pop_front();

		}
		if (vihZnak == 0) {
			chisloVih = -chisloVih;
			printf_s("%04d", chisloVih);
		}
		else {
			printf_s("%03d", chisloVih);
		}
	}
	else {
		std::cout << "Вы ввели не трехзначное число";
	}
	int chislo3, chislo4 = 1, razryadChe = 4, limitChe;
	std::cout << " \nВведите четырехзначное число: ";
	std::cin >> chislo3;
	limitChe = pow(schislen, razryadChe);
	chislo3 = sqrt(chislo3 * chislo3);
	if ((chislo3 >= (limitChe / schislen) and (chislo3 < limitChe * schislen))) {
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
