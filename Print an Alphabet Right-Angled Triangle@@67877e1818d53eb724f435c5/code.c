#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        char c;
        for(int j=1;j<=i;j++){
            printf("%c ",c)
            c++;
        }
        printf("\n");
    }
    return 0;
}