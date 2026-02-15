#include<stdio.h>
int main(){
    int row,col,n;
    printf("Enter Number: ");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        int num = n;
        for(col=1;col<=row;col++){
            printf("%d",num--);
        }
        printf("\n");
    }
    return 0;
}
