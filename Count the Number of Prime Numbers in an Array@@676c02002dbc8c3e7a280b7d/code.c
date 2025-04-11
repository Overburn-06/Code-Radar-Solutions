#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int prime=0;
    // for(int i=0;i<n;i++){
        for(int j=0;j<arr[j];j++){
            if(arr[j]%j!=0 && j!=0 && j!=1){
                prime=prime+1;
            }
        }
    // }
    printf("%d",prime);
}