#include <stdio.h>
#include <math.h>
void towerOfHanoi(int n, char start, char storage, char end) {
    if(n==1){
        printf("Move disk 1 from %c to %c\n",start,end);
        return;
    }

    towerOfHanoi(n-1,start,end,storage);
    printf("Move disk %d from %c to %c\n",n,start,end);
    towerOfHanoi(n-1,storage,start,end);
}

int main() 
{
    int num;
    int steps;
    printf("Enter the number of disks: ");
    scanf("%d",&num);
    steps=pow(2,num)-1;
    printf("The no of steps required are %d\n",steps);
    printf("The STEPS are : \n");
    towerOfHanoi(num,'A','B','C');
    return 0;
}
