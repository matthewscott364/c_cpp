#include <stdio.h>
#include <stdbool.h>

int main() {
    int grade = 100;
    float gpa = 3.0;
    double pi = 3.14159;
    char name[] = "Matthew Scott";
    bool isCollege = true;

    printf("I got a %d on my Intro to Python Final Exam!\n", grade);
    printf("My gpa currently is a %f!\n", gpa);
    printf("The first 7 characters of pi is %lf.\n", pi);
    printf("My name is %s, and I love C Programming!\n", name);
    if(isCollege) {
        printf("I hope you're doing well in your classes!");
    }
    else {
        printf("I hope you go back to school soon");
    }
}  