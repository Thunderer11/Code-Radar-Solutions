void isPrime(int a){
    for(int i=1;i<=a;i++){
        if(a%i==0){
            printf("1");
        }
        else{
            printf("0");
        }
    }
}