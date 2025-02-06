#include <stdio.h>

int main() {
    int a, b;
    char c;

    printf("Enter two numbers followed by an operator (+, -, *, /): ");
    scanf("%d %d %c", &a, &b, &c); // Space before %c to ignore whitespace

    if (c == '+') {
        printf("%d\n", a + b);
    } 
    else if (c == '-') {
        printf("%d\n", a - b);
    } 
    else if (c == '/') {
        if (b != 0) { // Prevent division by zero
            printf("%d\n", a / b);
        } else {
            printf("Error: Division by zero\n");
        }
    } 
    else if (c == '*') {
        printf("%d\n", a * b);
    } 
    else {
        printf("Error: Invalid operator\n");
    }

    return 0;
}
