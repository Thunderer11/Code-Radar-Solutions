void isPrime(int a){
    for(int i=1;i<=a;i++){
        if(a%i==0){
            return 1;
        }
        else return 0;
    }
}