#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter a Number: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        // space
        for(j=1; j<=n-i; j++){
            printf(" ");
        }
        for(k=1; k<=i; k++){
            printf("%d",i);
        }
        // new line
        printf("\n");
    }
    return 0;
}