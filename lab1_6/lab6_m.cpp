/*Задача 1.20
Составить программу нахождения кинетической  энергии тела,
массой m,  движущегося со скоростью  V.

С использованием вычисляющей функции, расположенной в другой файле проекта
*/


#include <iostream>
#include <math.h>
using namespace std;

float count(float m, float v);

int main()
{
	setlocale(LC_ALL, "Russian");
	float m = 1;
	float v = 1;
	float e = count(m, v);
	cout << endl << "При массе равной " << m << " и при скорости равной " << v << " кинетическая энергия равна: " << e << endl;
	cout << "Введите значение массы:";
	cin >> m;
	cout << "Введите значение объема:";
	cin >> v;
	e = count(m, v);
	cout << "Кинетическая энергия равна: " << e;
}