#include "pch.h"
#include "sha1.h"
#include <iostream>


sha1::sha1()
{
}


sha1::~sha1()
{
}

void sha1::hash()
{
	/*Присоединяем бит '1' к сообщению
Присоединяем k битов '0', где k наименьшее число ≥ 0 такое, что длина получившегося сообщения
(в битах) сравнима по модулю  512 с 448 (length mod 512 == 448)
Добавляем длину исходного сообщения (до предварительной обработки) как целое 64-битное
Big-endian число, в битах.

В процессе сообщение разбивается последовательно по 512 бит:
for перебираем все такие части
    разбиваем этот кусок на 16 частей, слов по 32-бита (big-endian) w[i], 0 <= i <= 15
	*/
  //  16 слов по 32-бита дополняются до 80 32-битовых слов:
	W[16] = ;
	W[17] = ;
	W[18] = ;
	W[19] = ;
	W[21] = ;
	W[22] = ;
	W[23] = ;
	W[24] = ;
	W[25] = ;
	W[26] = ;
	W[27] = ;
	W[28] = ;
	W[29] = ;
	W[30] = ;
	W[31] = ;
	W[32] = ;
	W[33] = ;
	W[34] = ;
	W[35] = ;
	W[36] = ;
	W[37] = ;
	W[38] = ;
	W[39] = ;
	W[40] = ;
	W[41] = ;
	W[42] = ;
	W[43] = ;
	W[44] = ;
	W[45] = ;
	W[46] = ;
	W[47] = ;
	W[48] = ;
	W[49] = ;
	W[50] = ;
	W[51] = ;
	W[52] = ;
	W[53] = ;
	W[54] = ;
	W[55] = ;
	W[56] = ;
	W[57] = ;
	W[58] = ;
	W[59] = ;
	W[60] = ;
	W[61] = ;
	W[62] = ;
	W[63] = ;
	W[64] = ;
	W[65] = ;
	W[66] = ;
	W[67] = ;
	W[68] = ;
	W[69] = ;
	W[70] = ;
	W[71] = ;
	W[72] = ;
	W[73] = ;
	W[74] = ;
	W[75] = ;
	

        
	a = h0;
	b = h1;
	c = h2;
	d = h3;
	e = h4;
	for (size_t i = 0; i < 80; i++)
	{

		if  (0 <= i <= 19) {
			f = (b and c) or ((not b) and d);
			k = 0x5A827999;
		}
		else {
			if (20 <= i <= 39) {
				f = b xor c xor d;
				k = 0x6ED9EBA1;
			}
			else {
				if (40 <= i <= 59) {
					f = (b and c) or (b and d) or (c and d);
					k = 0x8F1BBCDC;
				}
				else if (60 <= i <= 79) {
					f = b xor c xor d;
					k = 0xCA62C1D6;
				}
			}
		}
	}
	temp = (a leftrotate 5) + f + e + k + w[i];
	e = d;
	d = c;
	c = b leftrotate 30;
	b = a;
	a = temp;
	
}

void sha1::input()
{
	std::cout << "input messeng 64 char" << "\n";
	std::cin >> data;
}

void sha1::reset()
{
	h0 = 0x67452301;
	h1 = 0xEFCDAB89;
	h2 = 0x98BADCFE;
	h3 = 0x10325476;
	h4 = 0xC3D2E1F0;
	for (int  i = 0; i < 80; i++)
	{
		W[i] = 0;
	}
}

void sha1::division()
{
	for (int i = 0; i < 64; i += 4)
	{
		std::string time_part;
		time_part=data;
		W[i / 4] =atoi((time_part.substr(i, 4)).c_str());
	}
	
}

void sha1::clear()
{
}


