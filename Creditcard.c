#include <stdio.h>
int main()
{
  int array[16],temp[8];
  int i=0;
  printf("Enter credit card number - ");
  for (int x = 0; x < 15; x++) {
    scanf("%1d", &array[x]); 
  }
  int j=0,k=0;
  while(j<8){
      temp[k]=array[14-(2*j)];
      k++;
      j++;
  }
  int m=0;
  for(;m<8;m++){
      if(temp[m]>=10){
          temp[m]=temp[m]-9;
      }
  }
  int l=0;
  int s1=0;
  while(l<8){
      s1+=temp[l];
      l++;
  }
  int s2=0;
  for(int u=1;u<=15;u=u+2){
      s2+=array[u];
  }
  int sT=s1+s2;
  if(sT%10==0){
      printf("Credit card number is valid \n");
  }else{
      printf("Credit card number is not valid \n");
  }
  return 0;
}
