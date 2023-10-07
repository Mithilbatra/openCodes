#include <stdio.h>
#include <math.h>
int main()
{
    int num,switc,num2;
    switc=0;
    int temp;
    int d;
    int i;
    int n=0;
    printf("Enter number - ");
    scanf("%d",&num);
    temp=num;
    num2=num;
    
    while(num2){
        num2=num2/10;
        n++;
    }
    
    for(i=1;i<=n;i++){
        if(i==1){
            d=num%10;
            num=num/10;
            switc+=d*pow(10,n-1);
        }else if(i==n){
            d=num%10;
            num=num/10;
            switc+=d;
        }else{
            d=num%10;
            num=num/10;
            switc+=d*pow(10,i-1);
        }
    }
    
    printf("The number after swapping of %d is %d\n",temp,switc);
    return 0;
}
