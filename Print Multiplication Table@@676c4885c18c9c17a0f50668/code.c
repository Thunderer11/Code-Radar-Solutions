#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            printf("%d x %d = %d",a,i,j);
        }
    }
    return 0;
}