#include <stdio.h>
int gcd(int a,int b){
    if(a==b){
        return a;
    }else if(a>b){
        return gcd(a-b,b);
    }else{
        return gcd(a,b-a);
    }
}
int main() {
    int a,b;
    printf("Enter 2 numbers - ");
    scanf("%d %d",&a,&b);
    int result=gcd(a,b);
    printf("gcd(%d,%d)=%d\n",a,b,result);
    return 0;
}
