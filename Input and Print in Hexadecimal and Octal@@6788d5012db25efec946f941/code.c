#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%X%o",&a,&b);
    printf("Hexadecimal: %X\n",a);
    printf("Octal: %o",b);
    return 0;
}