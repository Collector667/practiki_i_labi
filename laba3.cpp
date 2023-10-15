#include <stdio.h>  // функции стандартного ввода-вывода
#include <iostream> // для cout

#include <clocale> // русский язык
#define DIM  5	   // размерность матрицы

int main()
{
	float Matrix[DIM][DIM], newMatrix[DIM][DIM];
	int line, col;
	std::setlocale(LC_ALL, "rus");
	
	do { puts("\nВведите размерности матрица, максимально до 5"); scanf_s("%d %d", &line, &col); }
	while ((line <= 0) or (line > DIM) or (col <= 0) or (col > DIM));
	puts("\nВведите построчно элементы матрицы");
	for (int i = 0; i < line; i++)     // цикл перебора строк
		for (int j = 0; j < col; j++)    // цикл перебора столбцов
		{
			printf_s("\nМатрица(%1d,%1d) = ", i + 1, j + 1);
			scanf_s("%f", &Matrix[i][j]);
			printf_s("Введено Матрица(%1d,%1d)=%6.2f", i + 1, j + 1, Matrix[i][j]);
		}
	std::cout << "\nВвод закончен\nМахмудов М.З. группа 3354, вариант 8 \nИзначальная матрица: \n";
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < col; j++) {
			std::cout << Matrix[i][j] << "  ";
			newMatrix[j][i] = Matrix[i][j];
		}
		std::cout << "\n";
	}
	std::cout << "Измененная матрица, согласно условия, изменить стобец и строку, кроме первого и последнего элемента \n";
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < line; j++) {
			std::cout << newMatrix[i][j] << "  ";
		}
		std::cout << "\n";
	}
	float summa = 0;
	float minNum = newMatrix[0][0], maxNum = newMatrix[0][0];
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < col; j++) {
			if ((i + j) % 3 == 0) {
				summa += newMatrix[j][i];
			}
			if (newMatrix[j][i] <= minNum) {
				minNum = newMatrix[j][i];
			}
			if ((newMatrix[j][i]) >= maxNum) {
				maxNum = newMatrix[j][i];
			}
		}
	}
	std::cout << "Сумма элементов, чьи номера столбцов и строк в сумме кратны трем: " << summa;
	std::cout << "\nРазность между наибольшим и наменьшим элементом равна: " << maxNum - minNum;
	std::cin.get();
	return 0;
}
