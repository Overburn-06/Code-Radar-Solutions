#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,i;
    scanf("%d",&a);
    for(i=0;i=a;i=i+1){
        printf("%d",i);
        i=i+1;
    }
    
    return 0;
}