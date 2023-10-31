#include <stdio.h>
int main()
{
    int arr[5][5],counter=0,r=0;
    printf("Enter array elements(5x5) - \n");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int u=0;u<5;u++){
        for(int v=0;v<5;v++){
            for(int k=0;k<5;k++){
                if(arr[u][u]!=arr[k][k]){
                    r++;
                }
            }
            if(r!=0){
                counter++;
            }
            if(arr[u][v]!=arr[v][u]){
                counter++;
            }
        }
    }
    if(counter==0){
        printf("The matrix is a Symmetric matrix\n");
    }else{
        printf("The matrix is Not a symmetric matrix\n");
    }
}
