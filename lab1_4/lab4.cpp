//------------------------------------------------//
//                 L1 Task 1.20                   //
//   Draw up a program for finding the kinetic    //
//  energy of a body, mass m, moving with speed V //
//            Using a calculation function        //
//             BELOW the main function            //
//        and parameters passed by reference      //
//------------------------------------------------//

#include <math.h>

#include <iostream>
using namespace std;

void count(float m, float v, float& e);

int main() {
    setlocale(LC_ALL, "Russian");
    float m = 1;
    float v = 1;
    float e = 1;
    count(m, v, e);
    cout << endl
         << "При массе равной " << m << " и при скорости равной " << v << " кинетическая энергия равна: " << e
         << endl;
    cout << "Введите значение массы:";
    cin >> m;
    cout << "Введите значение объема:";
    cin >> v;
    count(m, v, e);
    cout << "Кинетическая энергия равна: " << e;
}

void count(float m, float v, float& e) { e = (m * pow(v, 2) / 2); }
