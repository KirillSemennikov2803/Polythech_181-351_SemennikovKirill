// lab7_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "matrix.h"
#include "vector.h"
int main()
{
	setlocale(LC_ALL, "ru");

	matrix matrA, matrB;
	matrA.input(); matrA.print();
	matrB.input(); matrB.print();
	std::cout << "";
	matrA.transp(); matrA.print();
	matrA.multiplication(2); matrA.print();
	matrA.summMatrix(matrB); matrA.print();
	matrA.multMatrix(matrB); matrA.print();
	std::cout << "Вектора"<< std::endl;
	vector VecA, VecB;
	VecA.inputV(); VecA.printV();
	VecB.inputV(); VecB.printV();
	VecA.multiplication(3); VecA.printV();
	VecA.skolar_product(VecB); VecA.printV();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

