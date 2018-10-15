#pragma once
class matrix
{
private:
	int first_matr[10][10];
	int stolb;
	int strok;
public:
	bool correx(int a, int b);
	bool input();
	bool print();
	bool summMatrix(matrix matr2);
	bool multMatrix(matrix matr2);
	int getElem(int st, int sl);
	bool transp();
	int getStrok();
	int getStolb();
	bool multiplication(int number);
	matrix();
	~matrix();
};

