#include <stdio.h>

int result = 0;

int add(int x, int y) {
    int result = x + y;
}

int subtract(int x, int y) {
    int result = x - y;
}


int main() {
    int x = 5; // LOCAL
    int y = 6;

    int result = subtract(x, y);
    printf("%d", result);

    return 0;
}