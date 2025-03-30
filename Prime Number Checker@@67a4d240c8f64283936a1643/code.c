int isPrime(int a){
    if(a<2)
        return 1;
    for(int i=1;i<=a;i++){
        if(a%i==0)
            return 1;
        else return 0;
    }
}