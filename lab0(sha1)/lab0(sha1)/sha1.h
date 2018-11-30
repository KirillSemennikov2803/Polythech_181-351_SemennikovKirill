#pragma once
#include <string>
#include <fstream>
#include <iostream>
class sha1
{
private:
	std::string data;
	unsigned long int *part;
	unsigned long int W[80];
	unsigned long int h0 = 0x67452301;
	unsigned long int h1 = 0xEFCDAB89;
	unsigned long int h2 = 0x98BADCFE;
	unsigned long int h3 = 0x10325476;
	unsigned long int h4 = 0xC3D2E1F0;
	unsigned long int a, b, c, d, e, f, k, temp;
	unsigned long long lenght;
public:
	sha1();
	~sha1();
	void hash();
	void input();
	void reset();
	void division();
	void clear();

};

