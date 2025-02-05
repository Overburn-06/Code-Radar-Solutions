#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&b);
    if(a>b && a>c){
        printf("%d"a);
    }
    else if (b>c && b>a){
        printf("%d",b)
    }
    else if (c>a && c>b){
        printf("%d",c)
    }

   
    return 0;
}