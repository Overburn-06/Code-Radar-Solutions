#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    char a[50];
    char c[50];
    int b;
    scanf("%c",&a);
    scanf("%d",&b);
    scanf("%c",&c);
    printf("Name: %c ",a);
    printf("Age: %d ",b);
    printf("Hobby: %c ",c);
    return 0;
}