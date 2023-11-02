#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50]="A";
    char str2[50]="B";
    char str3[50];
    int n;
    printf("Enter no of terms - ");
    scanf("%d",&n);
    printf("%s ",str1);
    printf("%s ",str2);
    while(n>2){
     int i=0,len=0;
     for(i=0;str2[i]!='\0';i++){
        str3[i]=str2[i];
        len++;
     }
     for(int j=0;str1[j]!='\0';j++){
        str3[len+j]=str1[j];
     }
     int k=0;
     while(str3[k]!='\0'){
         printf("%c",str3[k]);
         k++;
     }
     printf(" ");
     strcpy(str1,str2);
     strcpy(str2,str3);
     n--;
    }
    return 0;
}
