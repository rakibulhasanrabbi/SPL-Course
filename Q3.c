#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        int term=i;
        for(int j=1; j<=i; j++)
        {
            printf("%d", term++);
        }
        printf("\n");
    }
    return 0;
}