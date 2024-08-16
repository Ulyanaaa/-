//------------------------------------------------//
//                  L1 Task 1.20                  //
//   Draw up a program for finding the kinetic    //
//  energy of a body, mass m, moving with speed V //
//            Using a calculation function        //
//             BELOW the main function            //
//            and using global variables          //
//------------------------------------------------//

#include <math.h>

#include <iostream>
using namespace std;

float global_m = 1;
float global_v = 1;

void count(float& e);

int main() {
    setlocale(LC_ALL, "Russian");
    float e;
    count(e);
    cout << endl
         << "При массе равной " << global_m << " и при скорости равной " << global_v
         << " кинетическая энергия равна: " << e << endl;
    cout << "Введите значение массы:";
    cin >> global_m;
    cout << "Введите значение объема:";
    cin >> global_v;
    count(e);
    cout << "Кинетическая энергия равна: " << e;
}
void count(float& e) { e = (global_m * pow(global_v, 2) / 2); }
