#include<stdio.h>
void checkArraySort(int arr[],int n){
    for(int i=1;i<=n;i++){
        if(arr[i]<arr[i+1]){
            return 1;
        }
    }
    return 0;
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