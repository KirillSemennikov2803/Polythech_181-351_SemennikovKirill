//
//  main.cpp
//  Lab 5 class
//
//  Created by Kirill on 06.10.2018.
//  Copyright © 2018 Kirill. All rights reserved.
//

#include <iostream>
class vehicle{
private:// только в классе
public:// любые
    double speed;//скорость
    unsigned char capacity;//число пасажиров
    bool check_regnumber();
};
class user_data{
private:
    char first_name[255];
    char second_name[255];
    char str_passport[10];
    char str_birthdate[10];
public:
    bool set_birthdate(char p_birthdate[10])
    {
        for (int i = 0; i < 10; i++)
        {
          
                if (char(p_birthdate[i]) >= 46  and char(p_birthdate[i]) <= '9'){
                    
                }
                else{
                    return false;
                }
        //должно соответствовать формату 00.00.0000
        }
        return true;
    };
    bool set_name(char p_name[10]){
        for (int i = 0;i < 10; i++) {
            if ((char(p_name[i]) >= 'A' and char(p_name[i]) <= 'Z') or (char(p_name[i]) >= 'a' and char(p_name[i]) <='z') or (char(p_name[i]) == '-')){}
                else{
                    return false;
                    }
                        }
        return true;
   }
    

};
int main() {
    user_data birth;
    char birth_array[11]="25.06.2000";
    if (birth.set_birthdate(birth_array)) {
        std::cout <<"False";
    }
    else{
        std::cout <<"Good";
    }
}
