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
            if(arr[i]>arr[j]){
                int temp= arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
    }
    int issorted=1;
    for(int i=0;i<n;i++){
        if(arr[i]!=carr[i]){
            issorted=0;
            break;
        }
        if(arr[i]==carr[j]){
            issorted=1
        }
    }
    if(issorted==1){
        printf("Sorted");

    }
    else printf("Not Sorted");
}


