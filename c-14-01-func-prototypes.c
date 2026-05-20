#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age);
bool ageCheck(int age);

int main() {
    hello("Spongebob", 14);
    if(ageCheck(14)) {
        printf("You are old enough to work at the Krusty Krab.");
    }
    else {
        printf("You must be 16+ to work at the Krusty Krab.");
    }
    return 0;
}

void hello(char name[], int age) {
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
}

bool ageCheck(int age) {
    return age >= 16;
}