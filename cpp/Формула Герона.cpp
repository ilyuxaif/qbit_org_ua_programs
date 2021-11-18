#include <iostream>
#include "stdio.h"
#include "math.h"

using namespace std;

int main() {

    double a, b, c;
    cin >> a >> b >> c;

    double p = (a + b + c) / 2;

    printf("%0*.*f\n", 4, 4, sqrt(p * (p - a) * (p - b) * (p - c)));


    return 0;
}