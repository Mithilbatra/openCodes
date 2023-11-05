#include <stdio.h>
#include <string.h>
int main() 
{
    int n,len,c;
    printf("Enter the number of students - ");
    scanf("%d",&n);
    printf("Enter %d names - \n",n);
    char name[n][20];
    char name2[20];
    for(int i=0;i<n;i++){
        scanf("%s",name2);
        len=strlen(name2);
        for(int j=0;j<len;j++){
            name[i][j]=name2[j];
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            c=strcmp(name[j],name[j+1]);
            if(c>0){
                char temp[20];
                strcpy(temp,name[j]);
                strcpy(name[j],name[j+1]);
                strcpy(name[j+1],temp);
            }
        }
    }
    printf("Names are - \n");
    for(int i=0;i<n;i++){
       for(int j=0;name[i][j]!='\0';j++){
          printf("%c",name[i][j]);
       }
       printf("\n");
    }

    return 0;
}
