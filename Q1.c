#include <stdio.h>
int main()
{
int age;
printf("input age - ");
scanf("%d",&age);

if(age>=18){
printf("the peson is ELIGIBLE to vote\n");
}else{
printf("the person is NOT ELIGIBLE to vote\n");
}
return 0;
}
