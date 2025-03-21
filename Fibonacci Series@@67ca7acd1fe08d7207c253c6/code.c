// Your code here...
void fibonacciSeries(int n){
    int a=0;
    int b=1;
    int sum;
    for(int i=1; i<=n;i++){
        if(i==1) printf("0 ");
        else if(i==2) printf("1 ");
        else{
        sum=a+b;
        a=b;
        b=sum;
        printf("%d ",sum);
        }
    }
    return;
}