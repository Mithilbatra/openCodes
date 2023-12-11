#include <stdio.h>
void printPattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int min=i<j?i:j;
            int val=n-min;
            printf("%d ",val);
        }
        for(int j=n-2;j>=0;j--){
            int min=i<j?i:j;
            int val=n-min;
            printf("%d ",val);
        }
        printf("\n");
    }
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<n;j++){
            int min=i<j?i:j;
            int val=n-min;
            printf("%d ",val);
        }
        for(int j=n-2;j>=0;j--){
            int min=i<j?i:j;
            int val=n-min;
            printf("%d ",val);
        }
        printf("\n");
    }
}
int main() 
{
    int n ;
    scanf("%d",&n); 
    printPattern(n);
    return 0;
}
