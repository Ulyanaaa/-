#include <cmath>
#include <iostream>
using namespace std;

double for_cycle(float x, double& term, int& degree, double e)
{
    int mas1[] = { 1, 1, 1 , -1, -1, -1};    // Массив для + и -
    int mas2[] = { 2, 1, 1 , 2, 1, 1 };    // Массив для знаменателя

    int d;    // Переменная, отвеающая за соотношение слагаемого с индексом в массивах
    double sum = 0;    // Сумма последовательности
    int denominator = -1;    // Знаменатель слагаемого

    term = 1.1;    // Переменная для слагаемых (последнего слагаемого)
    degree = 0;    // Переменная для степеней и номер слагаемого последовательности

    int k = 10000;
    int i;

    for (i = 0; i!= k; i++)
    {
        degree++;
        d = (degree % 6) - 1;
        denominator += mas2[d];

        term = pow(x, degree) / denominator;
        term = term * mas1[d];

        sum = sum + term;

        if (abs(term) < e)
        {
            break;
        }
    }
    return sum;
}