#include <stdio.h>

int main() {
    int i, j, n;
    printf("Enter any Number: ");
    scanf("%d",&n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == 0 || i == n-1 || i + j == n-1)
                printf("z");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}