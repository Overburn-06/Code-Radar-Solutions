// Your code here...
void fibonacciSeries(int n){
    int a=0;
    int b=1;
    int sum;
    for(i=1; i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("%d",sum);
    }
    
}