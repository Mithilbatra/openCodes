#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
    int len;
    printf("Enter password length : ");
    scanf("%d",&len);
    if(len<8){
        while(1){
            printf("Please enter valid password length : ");
            scanf("%d",&len);
            if(len>=8){
                break;
            }
        }
    }
    char password_characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+[]{}|;:'\",.<>/?";
    char special_characters[30]="!@#$%^&*()-_=+[]{}|;:'\",.<>/?";
    int lenght=strlen(password_characters);
    srand(time(NULL));
    char password[len+1];
    int specialflag=0,lowerflag=0,upperflag=0,numericflag=0;
    while(1){
      for(int k=0;k<len;k++){
        int random=rand()%lenght;
        char ch=password_characters[random];
        password[k]=ch;
      }
      for(int w=0;w<len;w++){
        for(int j=0;j<strlen(special_characters);j++){
            if(password[w]==special_characters[j]){
               specialflag=1;
            }
        }
        if(password[w]>='a' && password[w]<='z'){
            lowerflag=1;
        }
        if(password[w]>='A' && password[w]<='Z'){
            upperflag=1;
        }
        if(password[w]>='0' && password[w]<='9'){
            numericflag=1;
        }
      }
      if(specialflag==1 && lowerflag==1 && upperflag==1 && numericflag==1){
        break;
      }
    }
    password[len]='\0';
    printf("Random generated password is %s\n",password);
    return 0;
}
