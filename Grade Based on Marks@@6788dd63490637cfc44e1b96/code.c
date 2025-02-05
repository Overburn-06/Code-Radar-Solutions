#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    if (a>=90){
        printf("A");
    }
    else if(90<a>=80){
        printf("B");
    }
    else if(80<a>=70){
        printf("C");
    }
    else if(70<a>=60){
        printf("D");
    }
    else{
        printf("F");
    }
    return 0;
}