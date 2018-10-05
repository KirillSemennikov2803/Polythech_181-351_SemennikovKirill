// buble_SemennikovKirill_181-351.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

void buble(int *arr){
    for (int i = 0; i < 14; i++)
    {
        for (int m = 0; m < 14; m++)
        {
            if (arr[m]>arr[m+1])
            {
                arr[m] += arr[m+1];
                arr[m+1] = arr[m] - arr[m+1];
                arr[m] -= arr[m+1];
            }
        }
    }
    
}
using namespace std;
int main()
{
    int p;
    setlocale(LC_ALL, "ru");
    int arr[15];
    cout << "Введите массиы из 15 чисел" << endl;
    for (int i = 0; i < 15; i++)
    {
        cout << "Введите " << i+1 << "-е число - ";
        cin >> arr[i];
    }
    buble(arr);
    for (int i = 0; i < 15; i++)
    {
        cout << arr[i] <<" ";
    }
    
}

