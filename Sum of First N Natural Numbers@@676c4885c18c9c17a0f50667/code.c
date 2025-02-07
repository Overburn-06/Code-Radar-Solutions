#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a , i , sum=0;
    scanf("%d",&a);
    for(i=0;i<=a;++i){
        printf("%d",sum);
        sum=i+sum;
    }    
    return 0;
}