#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  // Loop for rows
        for (int space = 1; space <= n - i; space++) {  
            printf(" ");  // Printing spaces for pyramid alignment
        }
        for (int j = 1; j <= i; j++) {  
            printf("%d ", j);  // Printing numbers
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}

