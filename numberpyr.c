#include <stdio.h>
int main()
{
    int n;
    printf("enter value of n - ");
    scanf("%d",&n);
    
    int i,j,k,l;
    for(i=1;i<=(n+1);i++){
        k=(2*n)-(2*i)+1;
        while(k>=0){
            printf(" ");
            k--;
        }
        if(i==1){
            printf("0\n");
        }else{
        
        j=i-1;
        while(j>=0){
            printf("%d ",j);
            j--;
        }
        
        for(l=1;l<=(i-1);l++){
            printf("%d ",l);
        }
        printf("\n");
        }
    }
return 0;
}