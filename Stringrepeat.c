#include <stdio.h>
#include <string.h>
int main() 
{
    char str1[100],str2[100];
    int c=0,i,j,len1,len2;

    printf("Enter the string - ");
    gets(str1);
    printf("Enter the pattern - ");
    gets(str2);
    len1=strlen(str1);
    len2=strlen(str2);
    
    for(i=0;i<=len1-len2;i++){
        for(j=0;j<len2;j++){
            if(str1[i+j]!=str2[j]){
                break;
            }
        }
        if(j==len2){
            c++;
        }
    }
    printf("Number of occurrences - %d\n",c);
    return 0;
}
