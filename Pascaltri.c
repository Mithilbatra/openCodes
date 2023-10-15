#include <stdio.h>
int main()
{
    int i,j,k,l,n;
    printf("Enter no of lines - ");
    scanf("%d",&n);
    
    int arr[30],temp[30];
    arr[0]=1;
    temp[0]=1;
    j=n-1;
    while(j){
        printf(" ");
        j--;
    }
    printf("1\n");
    for(i=1;i<n;i++){
        j=n-i-1;
        while(j){
            printf(" ");
            j--;
        }
        for(k=1;k<n;k++){
            arr[k]= temp[k-1] + temp[k];
        }
        arr[i]=1;
        for(l=0;l<=i;l++){
            printf("%d ",arr[l]);
            temp[l]=arr[l];
        }
        printf("\n");
    }
}
