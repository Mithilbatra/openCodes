#include <stdio.h>
int main()
{
    int i,j,k,l,m;
    i=65;
    for(j=1;j<=7;j++){
        for(k=1;k<=8-j;k++){
            printf("%c ",i);
            i++;
        }
        i=65+6-j;
        if(j==1){
           while(i>=65){
               printf("%c ",i);
               i--;
           }
            printf("\n");
       }else{
           m=(4*j)-6;
           while(m--){
               printf(" ");
           }
           i=65+7-j;
           while(i>=65){
               printf("%c ",i);
               i--;
           }
           printf("\n");
        }
        i=65;
}
return 0;
}
