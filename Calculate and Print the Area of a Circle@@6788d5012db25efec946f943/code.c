#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a;
    float pi=3.14;
    scanf("%f",&a);
    printf("Area: %.2f",pi*(a*a));
    return 0;
}