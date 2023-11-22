#include <stdio.h>
#include <math.h>
void fun(int n){
   int i=n;
   int d;
   int r=0;
   int sum=0;
   while(i){
   d=i%2;
   i=(i-d)/2;
   r++;
   sum=sum+d*pow(10,r-1);
   }
   
   printf("The binary equivalent of %d is %d\n",n,sum);
}

void fun2(int n){
   int i=n;
   int d;
   int r=0;
   int sum=0;
   while(i){
   d=i%8;
   i=(i)/8;
   r++;
   sum=sum+d*pow(10,r-1);
   }
   
   printf("The octal equivalent of %d is %d\n",n,sum);
}

void fun3(int n){
   int i=n;
   int d;
   int r=0;
   int sum=0;
   char str[30];
   int lenght=0;
   int m;
   while (i){
        d = i%16;
        i = i/16;
        if(d<10){
            str[lenght] =d+'0';
        }else{
            str[lenght] = d-10+'A'; 
        }
        lenght++;
    }
    str[lenght]='\0';
    printf("The hexadecimal equiavlent of %d is ",n);
    m=lenght-1;
    while(m>=0){
      printf("%c",str[m]);
      m--;
    }

   }
int main()
{
   int a;
   printf("Enter number - ");
   scanf("%d",&a);
   fun(a);
   fun2(a);
   fun3(a);
   return 0;
}
