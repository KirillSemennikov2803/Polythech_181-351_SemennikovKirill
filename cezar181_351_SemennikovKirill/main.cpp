#include <iostream>
void cezar(char * sym){
    int a;
    for (int i = 0; i <= 12; i++) {
        a = (sym[i]);
        if (a >= 97 and a <= 99) {
            a = 23 + a;
            sym[i] = char(a);
            a = 0;
        }
        if (a >= 100 and a <= 122) {
            a = a - 3;
            sym[i] = (char)a;
            a = 0;
        }
        if (a >= 65 and a <= 67) {
            a = 23 + a;
            sym[i] = (char)a;
            a = 0;
        }
        if (a >= 68 and a <= 90) {
            a = a -3 ;
            sym[i] = (char)a;
            a = 0;
        }
}
}
int main(){
    char sym[12]="Hello world";
    cezar(sym);
    std::cout << sym << std::endl;
    return 0;
}

