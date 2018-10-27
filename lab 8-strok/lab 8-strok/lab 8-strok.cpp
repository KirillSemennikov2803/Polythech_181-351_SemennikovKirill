// lab 8-strok.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <cstring>//libreri for work  with cstrok
#include <iostream>
#include <string>
#include <fstream>

int main()
{
	std::fstream fs;
	std::fstream fs_out;
	fs.open("in.txt", std::fstream::in);
	fs_out.open("out.txt", std::fstream::out);
	std::string start_line;
	std::string notstart_line;
	std::getline(fs, start_line);
	std::getline(fs, notstart_line);
	int lenght = start_line.length();
	int pos = 0;
	while (pos!=std::string::npos)
	{
		pos = start_line.find(notstart_line, pos);
		if (pos == std::string::npos) { break; }
		fs_out << pos  << "\t";
		pos++;
	}
	fs.close();
	fs_out.close();
	

}

