void printPrimesInRange(int a,int b){
    for(int i=a;i<=b;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0){
            break;
        }
            else if(i%j!=0){
            printf("%d ",i);
        }
        }
        
    }
}