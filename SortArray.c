#include <stdio.h>
void iteration(int arr[],int n){
    int i=0,j,k=0;
    int t,u;
    while(i<n){
        for(j=1;j<n-i;j++){
            if(arr[j-1]>arr[j]){
                t=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=t;
            }
        }
        i++;
    }
    while(k<n){
        printf("%d ",arr[k]);
        k++;
    }
}

int main(){
    int n;
    printf("Enter size of the array - ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements -  ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    iteration(arr,n);
    return 0;
}
