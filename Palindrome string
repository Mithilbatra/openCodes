#include <stdio.h>
#include <string.h>
int main()
{
    char st[30];
    int i,lenght,flag=0;
    
    printf("Enter word/string - ");
    scanf("%s",st);
    
    lenght=0;
    while(st[lenght]!='\0'){
        lenght++;
    }
    
    for(i=1;i<lenght;i++){
        if(st[i]!=st[lenght-i-1]){
            flag=1;
            break;
        }
    }
    
    if(flag==1){
        printf("Not Palindrome\n");
    }else{
        printf("Palindrome\n");
    }
    
    return 0;
}
