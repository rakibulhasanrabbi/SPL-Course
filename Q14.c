
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter an odd integer: ");
    scanf("%d", &n);

  
    if (n % 2 == 0) {
        printf("Please enter an odd integer.\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        if (i == 1 || i == n) {
            for (j = 1; j <= n; j++) {
                printf("*");
            }
        } else if (i == (n + 1) / 2) {
            printf("*");
            for (j = 2; j <= n - 1; j++) {
                printf("*");
            }
            printf("*");
        } else {
            printf("*");
            for (j = 2; j <= n - 1; j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
