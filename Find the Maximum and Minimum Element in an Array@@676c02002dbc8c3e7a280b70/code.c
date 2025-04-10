 #include<stdio.h>
 int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
         if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
       }
    }
    int max= arr[n-1];
    int min=arr[0];
    printf("%d %d",min,max);
        
    
}