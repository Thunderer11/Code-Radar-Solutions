#include<stdio.h>
int checkArraySort(int arr[],int n){
    for(int i=1;i<=n;i++){
        if(arr[i]<arr[i-1]){
            return 0;
        }
        else return 1;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(checkArraySort(arr,n)){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
}