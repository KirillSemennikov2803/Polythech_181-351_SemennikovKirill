#pragma once
#include "matrix.h"
class vector : public matrix
{
private:
	int first_matr[10][10];
	int strok = 1;
	int stolb;
public:
	bool inputV();
	int skolar_product(vector matr2);
	bool printV();
	vector();
	~vector();

};

