#include <stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++){
         k=i;
         while(k-1){
             printf(" ");
             k--;
         }
         for(j=1;j<=6-i;j++){
             printf("* ");
         }
         j=1;
         printf("\n");
    }
 return 0;   
}
