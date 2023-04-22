#include <iostream>
#include <math.h>
using namespace std;


int main() 
{
	setlocale(LC_ALL, "Russian");
	float m = 1;
	float v = 1;
	float e = (m * pow(v, 2) / 2);
	cout << endl << "При массе равной " << m << " и при скорости равной " << v << " кинетическая энергия равна: " << e << endl;
	cout << "Введите значение массы:";
	cin >> m;
	cout << "Введите значение скорости:";
	cin >> v;
	e = (m * pow(v, 2) / 2);
	cout << "Кинетическая энергия равна: " << e;
}
