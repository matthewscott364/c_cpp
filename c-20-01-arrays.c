#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    char grades[] = {'A','B','C','D','F'};
    char name[] = "Matthew Scott";

    numbers[0] = 100;
    numbers[1] = 90;
    numbers[2] = 80;
    numbers[3] = 70;
    numbers[4] = 60;
    
    printf("%d\n", numbers[0]);
    printf("%d\n", numbers[1]);
    printf("%d\n", numbers[2]);
    printf("%d\n", numbers[3]);
    printf("%d\n", numbers[4]);

    return 0;
}