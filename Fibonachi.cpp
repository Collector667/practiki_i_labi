#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <clocale>
#include <windows.h>
#include <math.h>
#include <list>
#define _CRT_SECURE_NO_WARNINGS
#define TBB_PREVIEW_CONCURRENT_LRU_CACHE true
int fibonach(int lenNum) {
	if (lenNum < 0) {
		return 0;
	}
	else if (lenNum == 0) {
		return 0;
	}
	else if (lenNum == 1) {
		return 1;
	}
	else {
		return (fibonach(lenNum - 1) + fibonach(lenNum - 2));
	}
	}
	

int main() {
	using namespace std;
	int lenNum, chislo1;
	int chisloFib =0;
	const int ten = 10;
	int dva = 2;
	int tri = 3;
	setlocale(LC_ALL, "RU");
	cout << "Введите длину последовательности фибоначчи: ";
	cin >> lenNum;
	std::list<int> listFib;
	std::list<int> listChet;
	std::list<int> listTri;
	for (int j = 0; j <= lenNum; j++) {
		listFib.push_back(fibonach(j));
	}
	for (int i : listFib) {
		if (i % dva == 0) {
			listChet.push_back(i);
		}
	}
	for (int i : listFib) {
		chislo1 = i;
		
		bool triNum = 0;
		while (chislo1 > tri-1) {
			if (chislo1 % ten == tri) {
				triNum = 1;
				listTri.push_back(i);
				break;
			}
			chislo1 = chislo1 / ten;
		}	
	}
	int proiz =1;
	for (int i : listTri) {
		proiz = proiz * i;
	}
	cout << "Количество четных чисел: " << listChet.size() << endl;
	cout << "Произведение чисел содержащих 3 равняетсяя: " << sqrt(proiz);
	

}