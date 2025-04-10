int main(){
    int n;
    scanf("%d",n);
    int arr[];
    for(i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    int peak=-1;
    for(i=0;i<n;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            peak= arr[i];
        }
    }
    printf("%d",peak);
}