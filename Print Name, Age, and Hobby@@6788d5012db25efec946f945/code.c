#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[50];
    char c[50];
    int b;
    scanf("%c%d%c",&a,&b,&c);
    printf("Name: %c ",a);
    return 0;
}