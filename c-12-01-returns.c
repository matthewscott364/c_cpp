#include <stdio.h>

double square(double num) {
    return num * num;
}

int main () {
    double x = square(2.1);
    double y = square(3.2);
    double z = square(4.3);

    printf("%lf\n", x);
    printf("%lf\n", y);
    printf("%lf\n", z);
}