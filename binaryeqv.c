#include <stdio.h>
#include <math.h>
int fun(int n){
    int i=1;
    int r=0;
    int k;
    while(r<1){
        k=((int)n)/(pow(2,i));
        if(k<=0){
            r++;
        }else{
            i++;
        }
    }

    
    if(i==7){
        return (1);
    }else if(i==6){
        return (2);
    }else if(i==5){
        return (3);
    }else if(i==4){
        return (4);
    }else if(i==3){
        return (5);
    }else if(i==2){
        return (6);
    }else if(n==1){
        return (7);
    }else{
        return (0);
    }
}

int main()
{
    int num,temp;
    int rem=0;
    int base=1;
    int j,b=0;
    printf("INPUT DECIMAL NUMBER - ");
    scanf("%d",&num);
    temp=num;
    j=fun(temp);
    while(num>0){
                rem=num%2;
                b=b+(rem*base);
                num=num/2;
                base=base*10;
            }
            
    printf("THE BINARY EQUIVALENT IS : ");
    while(j--){
        printf("0");
    }
    printf("%d \n",b);
    return 0;
}
