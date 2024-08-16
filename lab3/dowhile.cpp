#include <cmath>
#include <iostream>
using namespace std;

double dowhile(float x, int k) {
    int mas1[] = {1, 1, -1, -1};
    int mas2[] = {1, 2, 1, 2};

    double factorial = -1;
    double factorial_past = 1;
    float st;
    int counter = 0;
    double res;
    int d;
    double sum = 0;

    counter++;
    d = (counter % 4) - 1;
    factorial += 2;

    if (factorial == 1) {
        st = factorial - mas2[d];
        res = pow(x, st) / factorial;

        res = res * mas1[d];
        sum = sum + res;

        k = k - 1;
    }

    do {
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