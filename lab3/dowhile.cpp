#include <cmath>
#include <iostream>
using namespace std;


double dowhile(float x, int k)
{
    int mas1[] = { 1, 1, -1 , -1 };    // Массив для + и -
    int mas2[] = { 1, 2, 1 , 2 };    // Массив для степеней


    double factorial = -1;    //Само число от которого нужно вычислить факториал
    double factorial_past = 1;    //Факториал предыдущего слагаемого
    float st;    // Перемаенная для степеней
    int counter = 0;    // Номер слагаемого последовательности
    double res;    // Результат слагаемого
    int d;    // Переменная, отвеающая за соотношение слагаемого с индексом в массивах
    double sum = 0;    // Сумма последовательности

    counter++;
    d = (counter % 4) - 1;
    factorial += 2;

    if (factorial == 1)
    {
        st = factorial - mas2[d];
        res = pow(x, st) / factorial;

        res = res * mas1[d];
        sum = sum + res;

        k = k - 1;

    }

    do
    {
        counter++;
        d = (counter % 4) - 1;
        factorial += 2;
        
        st = factorial - mas2[d];
        factorial_past = factorial_past * factorial * (factorial - 1);
        res = pow(x, st) / factorial_past;
        
        res = res * mas1[d];
        sum = sum + res;

        k = k - 1;

    } while (k > 0);

    return sum;
}