#include <stdio.h>

int main() {
    int dayOfWeek = 1;

    // Inefficient, use switches instead! Especially with fixed integer values! See c-08-02-switches.c

    if(dayOfWeek == 1) {
        printf("It is Monday");
    }
    else if(dayOfWeek == 2) {
        printf("It is Tuesday");
    }
    else if(dayOfWeek == 3) {
        printf("It is Wednesday");
    }
    else if(dayOfWeek == 4) {
        printf("It is Thursday");
    }
    else if(dayOfWeek == 5) {
        printf("It is Friday");
    }
    else if(dayOfWeek == 6) {
        printf("It is Saturday");
    }
    else if(dayOfWeek == 7) {
        printf("It is Sunday");
    }
    else {
        printf("Please enter a number (1 - 7)");
    }
    return 0;
}