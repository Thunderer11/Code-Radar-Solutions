#include<stdio.h>
void OddEvenNumber(int arr[],int n){
    *odd=0;
    *even=0;
    for(int i=0;i<=n;i++){
        if(arr[i]%2){
            (*even)++;
        }
        else{
            (*odd)++;
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int odd,even;
    OddEvenNumber(arr,n,&odd,&even);
    printf("%d",odd);
    printf("%d",even);
    return 0;
}