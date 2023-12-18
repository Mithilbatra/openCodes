#include <stdio.h>
#define RESET "\x1B[0m"
#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
int main() {
    int n;
    printf("Enter no of rows : ");
    scanf("%d",&n);
    int j,k,l,m;
    if(n<5){
        printf(RED "PATTERN CANNOCT BE PRINTED , INVALID NO OF ROWS\n" RESET);
        return -1;
    }
    printf("OUTPUT is : \n");
    for(int k=1;k<=n;k++){
        if(k==1 || k==n){
            j=n;
            while(j--){
                printf("*");
            }
            printf("\n");
        }
        if(k>=2 && k<=(n/2) && n%2==0){
            printf("*");
            l=k-2;
            while(l--){
                printf(" ");
            }
            printf("*");
            m=n-(2*k);
            while(m--){
                printf(" ");
            }
            printf("*");
            l=k-2;
            while(l--){
                printf(" ");
            }
            printf("*\n");
        }else if(k>=((n/2)+1) && k<n && n%2==0){
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
        if(k>=2 && k<=(n/2) && n%2!=0){
            printf("*");
            l=k-2;
            while(l--){
                printf(" ");
            }
            printf("*");
            m=n-(2*k);
            while(m--){
                printf(" ");
            }
            printf("*");
            l=k-2;
            while(l--){
                printf(" ");
            }
            printf("*\n");
        }else if(k>=((n/2)+1) && k<n && n%2!=0){
            printf("*");
            l=n-k-1;
            while(l-->0){
                printf(" ");
            }
            printf("*");
            m=2*(k-((n/2)+1))-1;
            while(m-->0){
                printf(" ");
            }
            if(k!=((n/2)+1)){
                printf("*");
            }
            l=n-k-1;
            while(l-->0){
                printf(" ");
            }
            printf("*\n");
        }
    }
    printf(GREEN "PATTERN PRINTED SUCCESSFULLY\n" RESET);
    return 0;
}
