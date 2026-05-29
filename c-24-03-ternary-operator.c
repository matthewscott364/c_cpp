#include <stdio.h>
#include <stdbool.h>

int main() {
    int number = 9;
    printf("%d is %s", number, (number % 2 == 0) ? "even" : "odd");
    return 0;
}