#pragma once
#include "matrix.h"
class vector : public matrix
{
private:
	int first_matr[10][10];
	const int strok = 1;
	int stolb;
public:
	bool input() override;
	bool multiplication(int number) override;
	int skolar_product(vector matr2);
	bool print() override;
	vector();
	~vector();

};

