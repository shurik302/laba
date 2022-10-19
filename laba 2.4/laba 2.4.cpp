/*****************************
* Група:     КНТ-212         *
* Виконавець:Балабуха Артем Русланович;*
* Варіант:   2;             *
* Лаб.робота: 2;             *
* Завдання:   г;             *
******************************/

// Підключення модулів


#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
using namespace std;
//ініціалізація проєкту
int main() {
    int n,result,resh=0,rezx=1,obrezx=0;
    cout << "Input n : "; cin >> n;
    for (int i = -5; i <= n; i++) {
        cout << "\ncicl : "<<i;
        for (int x = 1; x <= i + 5; x++) {
            rezx =  x;
            obrezx += rezx;
            cout << "\nRezx and Obrezx : " << rezx << "  ,  " << obrezx << "  ,  "<<x;
        }
        /*resh = ((i + 2) * abs(i - 4)) / obrezx */
    }
    cout << "\nResult : " << resh;
    return 0;
}