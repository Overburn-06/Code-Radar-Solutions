// Your code here...
int fibonacciSeries(int n){
    if(n==0||n==1 || n==2) return n ;
    int fibo= fibonacciSeries(n-1) + fibonacciSeries(n-2) ;
    printf("%d ",fibo);
    
}