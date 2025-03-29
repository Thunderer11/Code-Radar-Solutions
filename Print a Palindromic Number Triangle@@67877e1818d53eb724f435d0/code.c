#include <stdio.h>

// Function to print spaces for alignment
void print_spaces(int n, int row) {
    for (int i = 0; i < (n - row); i++) {
        printf(" ");
    }
}

// Function to print palindromic numbers
void print_palindromic_row(int row) {
    // Print increasing sequence
    for (int i = 1; i <= row; i++) {
        printf("%d", i);
    }
    // Print decreasing sequence
    for (int i = row - 1; i >= 1; i--) {
        printf("%d", i);
    }
    printf("\n");
}

// Function to generate the palindromic triangle
void print_palindromic_triangle(int n) {
    for (int row = 1; row <= n; row++) {
        print_spaces(n, row);
        print_palindromic_row(row);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    if (n < 1) {
        printf("Number of rows must be at least 1.\n");
        return 1;
    }

    print_palindromic_triangle(n);
    return 0;
}
