#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int r_arr[n];
    for(int i=0;i<n;i){
        scanf("%d",&arr[i]);
        r_arr[i]=arr[n-1-i];
    }
    int pallindrome=0;
    for(int i=0;i<n;i++){
        if(arr[i]=r_arr[i]){
            pallindrome=1;
        }
    }
    if(pallindrome==1) printf("YES");
    else printf("NO");
    
}