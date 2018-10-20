#include "pch.h"
#include <iostream>
#include "matrix.h"
matrix::matrix()
{	
}
matrix::~matrix()
{
	delete	[]  first_matr;
}
int matrix::getStrok(){
	return strok;
};
int matrix::getStolb() {
	return stolb;
}
 bool matrix::multiplication(int number)
{
	for (int stroki = 0; stroki < strok; stroki++)
	{
		for (int stolbs = 0; stolbs < stolb; stolbs++)
		{
			first_matr[stroki*stolb+stolbs] *= number;
		}
	}
	return true;
}
int matrix::getElem(int st, int sl) {
	if ((0 <= st < stolb) and (0 <= sl < strok)) {
		return first_matr[st*sl+sl];
	}
	std::cout << "error";
	return -1;
}
void matrix::swap(int a, int b)
{
	int c = first_matr[a];
	first_matr[a] = first_matr[c];
	 first_matr[b] = c;
}
bool matrix::transp()
{//доделать дома без костылей
	int time_matr[10][10] = {
			{0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0}
	};

	for (int stroki = 0; stroki < strok; stroki++)
	{
		for (int stolbs = 0; stolbs < stolb; stolbs++)
		{
			time_matr[stolbs][stroki] = first_matr[stroki*stolb+stolbs];
		}
	}
	for (int stroki = 0; stroki < stolb; stroki++)
	{
		for (int stolbs = 0; stolbs < strok; stolbs++)
		{
			first_matr[stroki*stolb + stolbs] = time_matr[stroki][stolbs];
		}

	}
	int c = strok;
	strok = stolb;
	stolb = c;
	return true;
}
bool matrix::correx(int a, int b) {
	if ((1 <= a <= 10) and (1 <= b <= 10))
	{
		return true;
	}
	return false;
};
bool matrix::input() {
	int stroki;
	int stolbs;
	std::cout << "Введите Кол-во строк ";
	std::cin >> stroki;
	std::cout << "Введите Кол-во столбцов ";
	std::cin >> stolbs;
	if (!correx(stroki, stolbs)) {
		return false;
	}
	first_matr = new int[stroki*stolbs];
	for (int i = 0; i < stroki; i++)
	{
		for (int j = 0; j < stolbs; j++)
		{
			std::cout << "Введите елемент "<< (i + 1) <<" "<< (j + 1) <<"\t";
			
			std::cin >> first_matr[i*stolbs+j];
			
			std::cout << "\n";
		}
		stolb = stolbs;
		strok = stroki;
		
	}
};
bool matrix::print() {
	std::cout << "\n";
	for (int i = 0; i < strok; i++)
	{
		for (int j = 0; j < stolb; j++)
		{
			std::cout << first_matr[i*stolb+j] << "\t";
		}
		std::cout << "\n";
	}
	std::cout << "__________________________________________" << "\n";
	return true;
};
bool matrix::summMatrix(matrix math2) {

	if((strok != math2.strok) or (stolb != math2.stolb)){
		return false;
	}
	for (int i = 0; i < strok; i++)
	{
		for (int j = 0; j < stolb; j++)
		{
			first_matr[i*j+j] += math2.first_matr[i*j+j];
		}
	}
	return true;

};
bool matrix::multMatrix(matrix math2) {
	if (stolb != math2.strok) {
		return false;
	};	
	matrix matr3;
	int c = 0;
	for (int strok1 = 0; strok1 < strok; strok1++)
	{
		
		for (int stolb2 = 0; stolb2 < stolb; stolb2++)
		{
			for (int Summ = 0; Summ < stolb; Summ++)
			{
				c += first_matr[strok1*stolb+Summ] * (math2.first_matr[strok1*stolb + Summ]);
			}
			
			matr3.first_matr[strok1 * stolb+stolb] = c;
			c = 0;
		}
	}
	stolb = math2.stolb;
	for (int stroki = 0; stroki < strok; stroki++)
	{
		for (int stolbs = 0; stolbs < stolb; stolbs++)
		{
			first_matr[stroki*stolb + stolb] = matr3.first_matr[stroki*stolb + stolb];
		}
	}

	return true;
}
