#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main(){
    int a,i ;
    printf("enter the number:");
    scanf("%d",&a);
    for ( i = 1; i<=a; i=i+1)
    {
        printf("%d\",i);
    }
    
    return 0;
}