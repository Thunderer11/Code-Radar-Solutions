#include<stdio.h>
void OddEvenNumber(int arr[],int n,int *odd,int *even){
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
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int odd,even;
    OddEvenNumber(arr,n,&odd,&even);
    printf("%d",odd);
    printf("%d",even);
    return 0;
}