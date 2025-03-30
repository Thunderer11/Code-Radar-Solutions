#include<stdio.h>
int rotateArray(int arr[],int n, int k){
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i]=arr[n-k+i];
    }
    for(int i=n-1;i>=k;i--){
        arr[i]=arr[i-k];
    }
    for(int i=0;i<k;i++){
        arr[i]=temp[i];
    }
}
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++){
        scanf("&d",arr[i]);
    }
    scanf("%d",&k);
    rotateArray(arr,n,k);
    for(int i=0;i<=n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}