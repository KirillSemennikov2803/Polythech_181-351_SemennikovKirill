
#include "stdafx.h"

#include <iostream>

class vehicle {
private:// только в классе
public:// любые
	double speed;//скорость
	unsigned char capacity;//число пасажиров
	bool check_regnumber();
};
class user_data {
private:
	char first_name[255];
	char second_name[255];
	char str_passport[10];
	char str_birthdate[10];
public:
	user_data();
	~user_data();
	user_data(char p_first[10], char p_second[10], char p_str_password[10], char p_str_birht[10]);
	user_data(char p_first[10], char p_second[10]);
	bool set_birthdate(char p_birthdate[10])
	{
		for (int i = 0; i < 10; i++)
		{

			if ((char(p_birthdate[i]) >= 46) && (char(p_birthdate[i]) <= '9')) {

			}
			else {
				return false;
			}
			//должно соответствовать формату 00.00.0000
		}
		return true;
	};
	bool set_name(char p_name[10]) {
		for (int i = 0; i < 10; i++) {
			if (((char(p_name[i]) >= 'A') && (char(p_name[i]) <= 'Z')) || ((char(p_name[i]) >= 'a' && char(p_name[i]) <= 'z')) ||( (char(p_name[i]) == '-'))) {}
			else {
				return false;
			}
		}
		return true;
	}
	bool set_password(char p_pasword[10])
	{
		for(int i = 0 ;i < 10;i++){
			if (char(p_pasword) >= '0' && char(p_pasword) >= '9') {}
			else {
				return false;
			}
		}
		return true;
	}

};
user_data::user_data()
{}
user_data::~user_data() {

}
user_data::user_data(char p_first[10],char p_second[10],char p_str_password[10],char p_str_birht[10])
{
	for (int i = 0; i < 10 ; i++)
	{
		first_name[i] = p_first[i];
		second_name[i] = p_second[i];
		str_passport[i] = p_str_password[i];
		str_birthdate[i] = p_str_birht[i];
	}

}
user_data::user_data(char p_first[10], char p_second[10])
{
	for (int i = 0; i < 10; i++)
	{
		first_name[i] = p_first[i];
		second_name[i] = p_second[i];
	}
}
int main() {
	user_data birth;
	char birth_array[11] = "25.06.2000";
	if (birth.set_birthdate(birth_array)) {
		std::cout << "Good\t";
	}
	else {
		std::cout << "Flase\t";
	}
	user_data first;
	char first_array[] = "karlworlsd";
	if (first.set_name(first_array)) {
		std::cout << "Good\t";
	}
	else {
		std::cout << "Flase\t";
	}
	user_data sec;
	char sec_array[] = "fkfkaklsdf";
	if (sec.set_name(sec_array)) {
		std::cout << "Good\t";
	}
	else {
		std::cout << "Flase\t";
	}
	user_data pas;
	char pas_array[] = "123456789j";
	if (pas.set_password(pas_array)) {
		std::cout << "Good\t";
	}
	else {
		std::cout << "Flase\t";
	}
	user_data user1;
	user_data user2("ivanov", "ivan", "1234j67890", "12.23.2000");
	user_data user3("ivanov", "ivan");;

}