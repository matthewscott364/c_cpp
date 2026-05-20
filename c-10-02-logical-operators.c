#include <stdio.h>

int main() {
    int temp = -5;
    if(temp <= 0 || temp >= 30) {
        printf("The temperature is bad!");
    }
    else {
        printf("The temperature is good!");
    }
    return 0;
}