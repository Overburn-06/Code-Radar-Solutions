#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    int digit;
    
    for(int i =0;i<n;i++){
        while(arr[i]!=0){
        digit=arr[i]%10;
        sum+= digit;
        arr[i]/10;
        }
        arr[i]=sum;
    }
    for(int i=0;i<n;i++){
        printf("%d",sum);
    }

}