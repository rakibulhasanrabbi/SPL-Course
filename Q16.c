#include<stdio.h>
int main(){
    int row,col,n;
    printf("Enter any Number: ");
    scanf("%d",&n);

     if (n % 2 == 0) {
        printf("Please enter an odd integer.\n");
        return 0;
    }


    for(row=1; row<=n; row++){
        for(col=1; col<=n; col++){
            if(row==col || row+col==n+1)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}