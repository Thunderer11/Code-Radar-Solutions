#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    for(int i = n; i >= 1; i--) {  // Controls rows (starts from n down to 1)
        for(int j = 1; j <= i; j++) {  // Prints '*' i times
            printf("*");
        }
        printf("\n");  // Moves to the next line
    }

    return 0;
}
