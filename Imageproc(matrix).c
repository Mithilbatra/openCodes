#include <stdio.h>
int main()
{
    int n,ch;
    printf("Enter side of square matrix - ");
    scanf("%d",&n);
    int m=(n-2);
    int arr1[n][n];
    int arr2[m][m];
    for(int q=0;q<m;q++){
        for(int w=0;w<m;w++){
            arr2[q][w]=0;
        }
    }
    printf("Enter image matrix(%dx%d) - \n",n,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter your choice(1 - vertical / 2- horizontal ) - ");
    scanf("%d",&ch);
    int arr3[3][3]={{1,0,-1},{1,0,-1},{1,0,-1}};
    int arr4[3][3]={{1,1,1},{0,0,0},{-1,-1,-1}};
    if(ch==1){
        for(int k=0;k<(m);k++){
          for(int l=0;l<m;l++){        
            for(int u=0;u<3;u++){
                for(int v=0;v<3;v++){
                    arr2[k][l]+=arr1[u+l][v+k]*arr3[u][v];
                }
            }
          }
        }
    }else{
       for(int k=0;k<(m);k++){
          for(int l=0;l<m;l++){        
            for(int u=0;u<3;u++){
                for(int v=0;v<3;v++){
                    arr2[k][l]+=arr1[u+l][v+k]*arr4[u][v];
                }
            }
          }
        } 
    }
    for(int y=0;y<m;y++){
        for(int z=0;z<m;z++){
            printf("%d\t",arr2[y][z]);
        }
        printf("\n");
    }
    return 0;
}
