// lab7_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
class matrix {
private:
	int first_matr[10][10];
	int stolb;
	int strok;
public:
	bool correx(int a, int b ) {
		if ((1 <= a <= 10) and (1 <= b <=10) )
		{
			return true;
		}
		return false;
	}
	matrix();
	~matrix();
	bool input() {
		int stroki;
		int stolbs;
		std::cin >> stroki;
		std::cin >> stolbs;
		if (!correx(stroki, stolbs)) {
			return false;
		}
		for (int i = 0; i < stroki; i++)
		{
			for (int j = 0; j < stolbs; j++)
			{
				std::cin >> first_matr[i][j];
			}
			stolb = stolbs;
			strok = stroki;
		}
	};
	bool print() {
		std::cout << "/n";
		for (int i = 0; i < strok ; i++)
		{
			for (int j = 0; j < stolb; j++)
			{
				std::cout << first_matr[i][j]<<"\t";
			}
			std::cout << "\n";
		}
		return true;
	};
	bool summMatrix(matrix matr2) {
		if (correxmash(1,2)) {

		}
	};
	void multMatrix(matrix matr2);
	void transp();
	int getStrok();
	int getStolb();
	int getElem(int st,int sl) {
		if ((0 <= st < stolb_1) and (0 <= sl < strok_1)) {
			return first_matr[st][sl];
		}
		std::cout << "error";
		return -1;
	};



};
int main()
{
    std::cout << "Hello World!\n"; 
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

