#include <stdio.h>
int main() {
    int n;
    printf("Enter no of rows : ");
    scanf("%d",&n);
    int j,k,l,m;
    printf("OUTPUT is :: \n");
    for(int k=1;k<=n;k++){
        if(k==1 || k==n){
            j=n;
            while(j--){
                printf("*");
            }
            printf("\n");
        }
        if(k>=2 && k<=(n/2)){
            printf("*");
            l=k-2;
            while(l--){
                printf(" ");
            }
            printf("*");
            m=8-(2*k);
            while(m--){
                printf(" ");
            }
            printf("*");
            l=k-2;
            while(l--){
                printf(" ");
            }
            printf("*\n");
        }else if(k>=((n/2)+1) && k<n){
            printf("*");
            l=n-k-1;
            while(l-->0){
                printf(" ");
            }
            printf("*");
            m=2*(k-((n/2)+1));
            while(m--){
                printf(" ");
            }
            printf("*");
            l=n-k-1;
            while(l-->0){
                printf(" ");
            }
            printf("*\n");
        }
    }
}
