#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[50],c[50];
    int b;
    scanf("%c%d%c",&a,&b,&c);
    printf("Name: %c \n Age: %d \n Hobby: %c", a,b,c);
    return 0;
}