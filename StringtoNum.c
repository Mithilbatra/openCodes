#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char stri[40];
    int num=0,lenght,i=0;
    printf("Enter string  - ");
    scanf("%[^\n]s",stri);
    lenght=strlen(stri);
    while(stri[i]!='\0'){
        if(stri[i]>='0'&& stri[i]<='9'){
            num+=pow(10,lenght-i-1)*(stri[i]-'0');
        }else{
            printf("Not convertable to number \nExiting...\n");
            return 0;
        }
        i++;
    }
    printf("Number is %d\n",num);
    return 0;
}
