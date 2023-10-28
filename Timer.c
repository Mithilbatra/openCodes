#include <stdio.h>
#include <time.h>
int main(){
 int seconds=10;
 while(seconds>0){
    printf("\r%04d",seconds);
    fflush(stdout);
    clock_t stop = clock() + CLOCKS_PER_SEC;
    while(clock()<stop){ }
        seconds--;
 }
    if(seconds==0){
        printf("\rTIME UP!!!\n");
    }
    return 0;
}
