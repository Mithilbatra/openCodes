#include <stdio.h>
int main()
{
    int n;
    int flag=0;
    printf("Enter array size - ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements - ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n%2==0){
        for(int j=0;j<(n/2);j++){
          if(arr[j]!=arr[n-j-1]){
            flag=1;
          }
        }
    }else{
        for(int j=0;j<((n-1)/2);j++){
          if(arr[j]!=arr[n-j-1]){
            flag=1;
          }
        }
    }
    if(flag==1){
        printf("Unsymmetric array\n");
    }else{
        printf("Symmetric array\n");
    }
    return 0;
}
