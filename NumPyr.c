#include <stdio.h>
int main()
{
    int i,j,k,l;
    int n;
    j=1;
    printf("enter number of rows - ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        k=i;
        l=n+1-i;
        while(l){
            printf(" ");
            l--;
        }
        while(k){
            printf("%d ",j);
            j++;
            k--;
        }
        printf("\n");
    }
}
