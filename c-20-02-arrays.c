#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    char grades[] = {'A','B','C','D','F'};
    char name[] = "Matthew Scott";

    for(int i = 0; i < 5; i++) {
        printf("%c ", grades[i]);
    }
    
    for(int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    return 0;
}