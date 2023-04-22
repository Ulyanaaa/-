/*
Для числа х ( |х|<1) cоставить  функцию  вычисления суммы:

  x + x^2/2 + x^3/3 - x^4/5 - x^5/6- x^6/7 + x^7/9 + x^8/10 + x^9/11 - x^10/13 - ...

C точностью e (0<e<=1). Считать, что требуемая точность достигнута, если очередное слагаемое ряда 
оказалось по модулю меньше чем e. Найти значение последнего слагаемого, включенного в сумму и его номер.

В вызывающей функции main() организовать контроль ввода чисел  x  и  e.
*/


#include <cmath>
#include <iostream>
using namespace std;

double dowhile(float x, double& term, int& degree, double e);
double while_cycle(float x, double& term, int& degree, double e);
double for_cycle(float x, double& term, int& degree, double e);



int main()
{

    setlocale(LC_ALL, "Russian");
   
    float x;    // Число х, которое вводится с клавиатуры и переменная степени
    double sum;    // Результат работы программы
    double term;
    int degree;
    double e;

    cout << "Введите х:" << endl;
    cin >> x;
    cout << "Введите e (0 < e <= 1):" << endl;
    cin >> e;


    if ((abs(x) < 1) and (x != 0) and (0 < e <= 1))
    {
        cout << "Выберите каким циклом решить:" << endl;
        cout << "1 - do while" << endl;
        cout << "2 - while" << endl;
        cout << "3 - for" << endl;
        cout << "0 - закончить работу программу" << endl;
        int number;
        cin >> number;
        switch (number)
        {
            case 1:
                sum = dowhile(x, term, degree, e);
                cout << "Сумма равна(не обязательно): " << sum << endl;
                cout << "Последнее слагаемое равно " << term << endl;
                cout << "Номер слагаемого " << degree << endl;
                break;
                
            case 2:
                sum = while_cycle(x, term, degree, e);
                cout << "Сумма равна(не обязательно): " << sum << endl;
                cout << "Последнее слагаемое равно " << term << endl;
                cout << "Номер слагаемого " << degree << endl;
                break;

              
            case 3:   
                sum =for_cycle(x, term, degree, e);
                cout << "Сумма равна(не обязательно): " << sum << endl;
                cout << "Последнее слагаемое равно " << term << endl;
                cout << "Номер слагаемого " << degree << endl;
                break;

            case 0:
                cout << "Пока-пока) "<< endl;
                break;

            default:
                cout << "Тогда решаем всеми способами))" << endl;


                sum = dowhile(x, term, degree, e);
                cout << "По циклу do while:" << endl;
                cout << "Сумма равна(не обязательно): " << sum << endl;
                cout << "Последнее слагаемое равно " << term << endl;
                cout << "Номер слагаемого " << degree << endl;

                sum = while_cycle(x, term, degree, e);
                cout << "По циклу while:" << endl;
                cout << "Сумма равна(не обязательно): " << sum << endl;
                cout << "Последнее слагаемое равно " << term << endl;
                cout << "Номер слагаемого " << degree << endl;

                sum = for_cycle(x, term, degree, e);
                cout << "По циклу for:" << endl;
                cout << "Сумма равна(не обязательно): " << sum << endl;
                cout << "Последнее слагаемое равно " << term << endl;
                cout << "Номер слагаемого " << degree << endl;
          
        }

    }

    else
    {
        cout << "x по модулю должен быть меньше 1  и не равен 0, т.к. тогда смысла в решении нет";
        cout << "e должен быть в промежутке 0 < e <= 1";
    }
}
