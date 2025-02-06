#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,i,z=0;
    scanf("%d",&a);
    for(i=1;i<a-1;i++){
        if(a%i==0){
            z=1;
            break;
        }

    }
    if(z==0){
        printf("Prime");
    }
    else if(z==1){
        printf("Not Prime");
    }
    return 0;
}