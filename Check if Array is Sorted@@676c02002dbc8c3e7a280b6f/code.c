#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int carr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        arr[i]=carr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                int temp= arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            if(arr[i]!=carr[j]){
                printf("Not Sorted");
                break;
            }
            // else printf("Sorted");
        }
    }
}