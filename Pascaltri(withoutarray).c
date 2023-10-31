#include <stdio.h>
int fact(int n){
    int i=1;
    while(n>=1){
        i=i*n;
        n--;
    }
    return i;
}
int main()
{
  int i,n;
  int j,k;
  printf("Enter no of rows - ");
  scanf("%d",&n);
  printf("Pascal triangle - \n");
  for(i=0;i<n;i++){
     k=n-i-1;
     while(k){
         printf(" ");
         k--;
     }
     for(j=0;j<=i;j++){
         int sum=fact(i)/((fact(j))*fact(i-j));
         printf("%d ",sum);
     }
     printf("\n");
  }
  return 0;
}
