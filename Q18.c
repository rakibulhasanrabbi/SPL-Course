#include <stdio.h>

int main() {
    int row, col, n;
    printf("Enter the size of the 'H' shape: ");
    scanf("%d", &n);

    for (row = 0; row < n; row++) {
        for (col = 0; col < n; col++) {
            if (col == 0 || col == n - 1 || row == n / 2)
                printf("H ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
