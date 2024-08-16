#include <cmath>
#include <iostream>
using namespace std;

double for_cycle(float x, double& term, int& degree, double e) {
    int mas1[] = {1, 1, 1, -1, -1, -1};
    int mas2[] = {2, 1, 1, 2, 1, 1};

    int d;
    double sum = 0;
    int denominator = -1;
    term = 1.1;
    degree = 0;

    int k = 10000;
    int i;

    for (i = 0; i != k; i++) {
        degree++;
        d = (degree % 6) - 1;
        denominator += mas2[d];

        term = pow(x, degree) / denominator;
        term = term * mas1[d];

        sum = sum + term;

        if (abs(term) < e) {
            break;
        }
    }
    return sum;
}