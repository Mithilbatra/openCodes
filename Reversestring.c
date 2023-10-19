#include <stdio.h>
void rev(char str[],int lenght) {
    char st[40];
    for (int j=0;j<lenght;j++){
        st[lenght-j-1]=str[j];
    }
    st[lenght]='\0';
    int k = 0;
    while(k<lenght){
        printf("%c", st[k]);
        k++;
    }
}

int main() {
    char str[40];
    int lenght=0;
    
    printf("Enter string - ");
    scanf("%[^\n]%*c", str);
    
    while(str[lenght]!='\0'){
        lenght++;
    }

    rev(str,lenght);
    
    return 0;
}
