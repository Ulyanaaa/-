#include <iostream>
#include<math.h>
using namespace std;

float minch(float a, float b);
float maxch(float a, float b);

float fun(float a, float x, float z)    //‘ункци€, вычисл€юща€ основное логическое выражение
{
    float f;
    if ((x > 0) and (z > 0))
    {
        f = log10(x) * minch(x, z);
    }
    else
    {
        f = maxch(maxch(minch(x, z), ((z * z) - (a * a))), (x * x));
    }
    return f;
}


void p(float f, float x, float& minf, float& X)    //‘ункци€, вычисл€юща€ мин
{
    if (minf > f) {
        minf = f;
        X = x;
    }
}


void ab(float& A, float& B)    // ‘ункци€, котора€ нормализует промежутов от моньшего к большему
{
    if (A > B)
    {
        float A1;
        A1 = A;
        A = B;
        B = A1;
    }

}

float minch(float a, float b)    // ‘ункци€,вычисл€юща€ минимальное значение из двух
{
    float c;
    if (a > b) c = b;
    else c = a;
    return c;

}



float maxch(float a, float b)    // ‘ункци€,вычисл€юща€ максимальное значение из двух
{
    float c;
    if (a > b) c = a;
    else c = b;
    return c;
}
