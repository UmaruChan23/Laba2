#include<cmath>

double f(double x) {

    if (x > 3) {
        return (1 / (pow(x, 3) + 6));
    } else {
        return pow(x, 2) - (3 * x) + 9;
    };
}

