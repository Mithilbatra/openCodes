#include <stdio.h>
int main()
{
    int i,j,k,l;
    int n;
    printf("Input number of rows - ");
    scanf("%d",&n);
    j=65;
    for(i=1;i<=n;i++){
        k=n+1-i;
        while(k){
            printf(" ");
            k--;
        }
        j=65;
        for(l=1;l<=i;l++){
            printf("%c ",j);
            j++;
        }
        printf("\n");
    }
}
