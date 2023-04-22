/*Задача 1.20
Составить программу нахождения кинетической  энергии тела,
массой m,  движущегося со скоростью  V.

С использованием вычисляющей функции, расположенной ниже 
главной функции и параметрами, передаваемыми по ссылке
*/

#include <iostream>
#include <math.h>
using namespace std;

float count(float m, float v, float& e);

int main()
{
	setlocale(LC_ALL, "Russian");
	float m = 1;
	float v = 1;
	count(m, v, e);
	cout << endl << "При массе равной " << m << " и при скорости равной " << v << " кинетическая энергия равна: " << e << endl;
	cout << "Введите значение массы:";
	cin >> m;
	cout << "Введите значение объема:";
	cin >> v;
	count(m, v, e);
	cout << "Кинетическая энергия равна: " << e;
}

float count(float m, float v, float& e)
{
	e = (m * pow(v, 2) / 2);
}

