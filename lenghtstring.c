#include <stdio.h>
#include <string.h>
int xstrlenght(char str[]){
    int lenght=0;
    while(str[lenght]!='\0'){
        lenght++;
    }
    return (lenght);
}
int main()
{
    char str[30];
    int len;
    printf("Enter string - ");
    scanf("%[^\n]s",str);
    len=xstrlenght(str);
    printf("Lenght of string is %d characters long\n",len);
    return 0;
}
