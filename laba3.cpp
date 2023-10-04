#include <stdio.h>  // функции стандартного ввода-вывода
#include <iostream> // для cout
#include <conio.h> // для _getch
#include <clocale> // русский язык
#define DIM  3	   // размерность матрицы

int main()
{	
	
	float Matrix[DIM][DIM], newMatrix[DIM][DIM]; 
	int line, col;           
	std::setlocale(LC_ALL, "rus");
	puts("\nВведите построчно элементы матрицы");
	for (line = 0; line < DIM; line++)     // цикл перебора строк
		for (col = 0; col < DIM; col++)    // цикл перебора столбцов
		{
			printf_s("\nМатрица(%1d,%1d) = ", line + 1, col + 1);  
			scanf_s("%f", &Matrix[line][col]); 
			printf_s("Введено Матрица(%1d,%1d)=%6.2f", line + 1, col + 1, Matrix[line][col]);  
				
		}
	  
	std::cout << "\nВвод закончен\nМахмудов М.З. группа 3354, вариант 8 \nИзначальная матрица: \n";
	for (int i = 0; i < DIM; i++) {
		for (int j = 0; j < DIM; j++) {
			std::cout << Matrix[i][j] << "  ";
			newMatrix[j][i] = Matrix[i][j];
		}
		std::cout << "\n";
	}
	std::cout << "Измененная матрица, согласно условия, изменить стобец и строку, кроме первого и последнего элемента \n";
	for (int i = 0; i < DIM; i++) {
		for (int j = 0; j < DIM; j++) {
			std::cout << newMatrix[i][j] << "  ";
			
		}
		std::cout << "\n";
	}
	float summa = 0;
	float minNum = newMatrix[0][0], maxNum = newMatrix[0][0];
	for (int i = 0; i < DIM; i++) {
		for (int j = 0; j < DIM; j++) {
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
	

	_getch(); 
	return 0;
}

