﻿/*Задача 3.23
 Составить функцию, которая вычисляет сумму К слагаемых 
 x^0/1! + x^1/3! - x^4/5! - x^5/7! + x^8/9! + x^9/11! - x^12/13!...
В вызывающей функции main() организовать контроль ввода  положительного целого K, большего 0.
*/


#include <cmath>
#include <iostream>
using namespace std;

double dowhile (float x, int k);
double while_cycle (float x, int k);
double for_cycle(float x, int k);



int main()
{

    setlocale(LC_ALL, "Russian");
   
    float x;    // Число х, которое вводится с клавиатуры и переменная степени
    int k;    // Количество слагаемых
    double sum;    // Результат работы программы
    bool flag = true;
    
    while (flag == true)
    {

        cout << "Введите х:" << endl;
        cin >> x;

        cout << "Введите k(количество слагаемых больше 0):" << endl;
        cin >> k;
        if (k > 0)
        {
            cout << "Выберите каким циклом решить:" << endl;
            cout << "1 - do while" << endl;
            cout << "2 - while" << endl;
            cout << "3 - for" << endl;
            int number;
            cin >> number;
            if (number == 1)    // Цикл do while
            {
                sum = dowhile(x, k);
                cout << "Сумма равна: " << sum << endl;
            }

            else if (number == 2)   // Цикл while
            {
                sum = while_cycle(x, k);
                cout << "Сумма равна: " << sum << endl;
            }

            else if (number == 3)    // Цикл for
            {
                sum = for_cycle(x, k);
                cout << "Сумма равна: " << sum << endl;
            }

            else
            {
                cout << "Тогда решаем всеми способами))" << endl;

                sum = dowhile(x, k);
                cout << "По циклу do while сумма равна: " << sum << endl;

                sum = while_cycle(x, k);
                cout << "По циклу while сумма равна: " << sum << endl;

                sum = for_cycle(x, k);
                cout << "По циклу for сумма равна: " << sum << endl;
            }

        }

        else
        {
            cout << "Количество слогаемых должно быть больше 0";
        }

        cout << "Хотите закончить программу? (1-да, 2-нет)" << endl;
        int r;
        cin >> r;
        if (r == 1) flag = false; 
        else cout << "Тогда запускаю код заново" << endl;
           

    }


    
    
}
