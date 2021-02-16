#include "peaks.h"

bool isInArea(double x, double y) {

    double rez1, rez2, rez3;
    if (y > 0) {
        rez1 = (xv0 - x) * (yv1 - yv0) - (xv1 - xv0) * (yv0 - y);
        rez2 = (xv1 - x) * (yv2 - yv1) - (xv2 - xv1) * (yv1 - y);
        rez3 = (xv2 - x) * (yv0 - yv2) - (xv0 - xv2) * (yv2 - y);
    } else {
        rez1 = (xv0 - x) * (yv3 - yv0) - (xv3 - xv0) * (yv0 - y);
        rez2 = (xv3 - x) * (yv4 - yv3) - (xv4 - xv3) * (yv3 - y);
        rez3 = (xv4 - x) * (yv0 - yv4) - (xv0 - xv4) * (yv4 - y);
    }

    return (rez1 >= 0 && rez2 >= 0 && rez3 >= 0) || (rez1 <= 0 && rez2 <= 0 && rez3 <= 0);
}

