#include <stdio.h>

int main() {
    int r, m;
    printf("Enter any number: ");
    scanf("%d", &r);

    m = (r + 1) / 2;

    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= r; j++) {
            if (i == m || j == m) {
                printf("$");
            } else if (i < m && j < m && (i + j) == (m + 1)) {
                printf("$");
            } else if (i < m && j > m && (j - i) == (m - 1)) {
                printf("$");
            } else if (i > m && j < m && (i - j) == (m - 1)) {
                printf("$");
            } else if (i > m && j > m && (i + j) == (r + m)) {
                printf("$");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
