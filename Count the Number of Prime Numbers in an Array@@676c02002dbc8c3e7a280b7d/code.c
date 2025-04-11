#include<stdio.h>

int is_prime(int x){
    if(x<2) return 0;
    for(int i=2;i<x;i++){
        if(x%i==0){
            return 0;
        }
        else return 1;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int prime=0;
    for(int i=0;i<n;i++){
        if(is_prime(arr[i])){
            prime+=1;
        }
    }
    printf("%d",prime);
}