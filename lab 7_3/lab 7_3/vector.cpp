#include "pch.h"
#include <iostream>
#include "vector.h"


bool vector::input()
{
	int stolbs;
	std::cout << "input number of rows ";
	std::cin >> stolbs;
	if (!((stolbs > 0) || (stolbs < 11))
		) {
		return false;
	}
	for (int i = 0; i < stolbs; i++)
	{

		std::cout << "input element " << (i + 1) << "\t";
		std::cin >> first_matr[0][i];
		std::cout << "\n";
		stolb = stolbs;

	}
	std::cout << std::endl;
	return true;
}

bool vector::multiplication(int number)
{
	for (int i = 0; i < stolb; i++)
	{
		first_matr[0][i] *= number;
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
	std::cout << "skolar product  = " << c << std::endl;
	return c;
}
bool vector::print()
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

}
vector::~vector()
{
}