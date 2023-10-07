#include <stdio.h>
int suii(int z){
    int s=0;
    int d;
    if(z>0){
    d=z%10;
    s=d+suii(z/10);
    }else{
        return (s);
    }
}  
int main()
{
    int num,sum;
    printf("enter 5 digit number - ");
    scanf("%d",&num);
    
    sum=suii(num);
    printf("the sum of digits of %d is equal to %d",num,sum);
    return 0;
}
