#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("%d",a);
        }
        else{
            printf("%d",c);
        }
    }
    else if (b>c){
        if(b>a){
            printf("%d",b);
        }
        else{
            printf("%d",a);
        }
    }
    else if (c>a){
        if(c>b){
            printf("%d",c);
        }
        else{
            printf("%d",b);
        }
    }
    else if(a==b && b==c){
        printf("%d",a);
    }
   
    return 0;
}