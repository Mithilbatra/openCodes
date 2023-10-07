#include <stdio.h>
#include <math.h>
int main()
{
    int num,temp,bin,d,r;
    r=0;
    bin=0;
    printf("input number - ");
    scanf("%d",&num);
    temp=num; 
    
    while(num>=1){
        d=num%2;
        num=(num-d)/2;
        r++;
        bin=bin+d*pow(10,r-1);
    }
    
    printf("the binary equivalent of %d is %d\n",temp,bin);
    return 0;
}
