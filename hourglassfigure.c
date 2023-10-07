#include <stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=7;i++){
      k=i;
      if(i<=4){
          while(k-1){
              printf(" ");
              k--;
          }  
          j=1;
          for(j=1;j<=5-i;j++) {
              printf("* ");
          }    
        
          printf("\n");
      }else{
          while(7-k){
              printf(" ");
              k++;
          }
          j=1;
          for(j=1;j<=(i-3);j++){
              printf("* ");
          }
         
          printf("\n");
      }
      
    }
    return 0;
}
