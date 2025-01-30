#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%X%O",&a,&b);
    printf("Hexadecimal: %X\n",a);
    printf("Octal: %O",b);
    return 0;
}