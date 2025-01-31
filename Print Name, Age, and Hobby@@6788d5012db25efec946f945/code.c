#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    char a[50];
    char c[50];
    int b;
    scanf("%s",&a);
    scanf("%d",&b);
    scanf("%s",&c);
    printf("Name: %s\n ",a);
    printf("Age: %d \n",b);
    printf("Hobby: %s ",c);
    return 0;
}