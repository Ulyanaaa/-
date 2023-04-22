/* Написать приложение, которое будет определять при каком минимальном 
значении Х из отрезка от А до В значение функции минимально
*/

#include <iostream>
#include<math.h>
using namespace std;

float fun(float a, float x, float z);
void ab(float& A, float& B);
void p(float f, float x, float& minf, float& X);

int main()
{
    setlocale(LC_ALL, "Russian");

    float A, B, h;
    float a, z;
    float x, f;
    float X = 10 * pow(10, 5);
    float minf = 10 * pow(10, 5);

    cout << "Введите промежуток. От:" << endl;
    cin >> A;
    cout << "Введите промежуток. До:" << endl;
    cin >> B;

    ab(A, B);

    h = abs((A - B) / 2);
    cout << "Введите шаг, он должен быть меньше или равен " << h << endl;
    cin >> h;

    if ((h <= (abs((A - B) / 2))) and (h != 0))
    {
        cout << "Введите значение переменной а:" << endl;
        cin >> a;

        cout << "Введите значение переменной z:" << endl;
        cin >> z;

        x = A;

        do
        {
            f = fun(a, x, z);
            p(f, x, minf, X);

            x = x + h;
        } while (x < B);

        cout << "Ответ: минимальное значение x равно " << X << " при минимальном значении функции, равном " << minf << endl;
    }
    else
    {
        h = abs((A - B) / 2);
        cout << "Значение шага должно быть меньше или равно " << h << " и не быть равным 0, пожалуйста, запустите код заново  " << endl;
    }

}





