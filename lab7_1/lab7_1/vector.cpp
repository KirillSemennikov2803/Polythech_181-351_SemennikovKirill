#include "pch.h"
#include <iostream>
#include "vector.h"


bool vector::inputV()
{
	int stolbs;
	std::cout << "¬ведите количество измерений ";
	std::cin >> stolbs;
	if (!((stolbs > 0) and (stolbs < 11))
) {
		return false;
	}
	for (int i = 0; i < stolbs; i++)
	{
		
			std::cout << "¬ведите елемент " << (i + 1) << "\t";
			std::cin >> first_matr[0][i];
			std::cout << "\n";
		stolb = stolbs;

	}
	return true;
}


int vector::skolar_product(vector matr2)
{
	if (stolb != matr2.stolb)
	{
		return -9000000;
	}
	int c = 0;
	for (int i = 0; i < stolb; i++)
	{
		c += first_matr[0][i] * matr2.first_matr[0][i];
	}
	return c;
}

bool vector::printV()
{
	for (int i = 0; i < stolb; i++)
	{
		std::cout << first_matr[0][i] << "    ";
	}
	std::cout << std::endl;
	return true;
}

vector::vector()
{
	strok = 1;
	stolb = 1;
	for (int i = 0; i < 10; i++)
	{
		first_matr[0][i] = 0;
	}
}



vector::~vector()
{
}
