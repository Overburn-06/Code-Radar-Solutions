#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int s_max= INT_MIN;
    for(int i=0;i<n;i++){
            if(max<arr[i]){
               max=arr[i];
            }
    }
    for(int i=0;i<n;i++){
        if(s_max<arr[i]&& arr[i]!=max){
            s_max=arr[i];
        }
        else s_max=-1;
    }
   
    printf("%d",s_max);
}