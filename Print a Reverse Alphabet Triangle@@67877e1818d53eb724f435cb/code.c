#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        char b='A';
        for(int j=1;j<=a-i;j++){
            b++;
            printf("%c",b);
        }
        printf("\n");
    }
    return 0;
}