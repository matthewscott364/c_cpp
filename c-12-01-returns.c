#include <stdio.h>

double cube(double num){
    return num * num * num;
}

double square(double num) {
    return num * num;
}

int main () {
    double x = cube(3);
    double y = cube(6);
    double z = cube(9);

    printf("%lf\n", x);
    printf("%lf\n", y);
    printf("%lf\n", z);
}