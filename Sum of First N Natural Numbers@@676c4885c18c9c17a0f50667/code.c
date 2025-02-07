#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main(){
    int a,i,sum=0 ;    
    scanf("%d",&a);
    for ( i = 1; i<=a; i=i+1)
    {
        printf("%d",sum);
        sum=sum+i;
    }
    
    return 0;
}