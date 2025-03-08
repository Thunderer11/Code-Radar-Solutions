#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        int b=i%2==0;
        for(int j=0;j<=i;j++){
            printf("%d ",b);
            b=1-b;
        }        
        printf("\n");
    }
    return 0;
}