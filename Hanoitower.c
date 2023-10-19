#include <stdio.h>
int main()
{
   int steps,rings;
   int i=1;
   int j;
   printf("Enter no of rings - ");
   scanf("%d",&rings);
   j=rings-1;
   steps=(2*rings)-1;
   printf("No of steps : %d\n",steps);
   printf("INSTRUCTIONS : \n");
   printf("The left most tower is A \ncenter tower is B\nright most tower is C\n");
   printf("As Disc number increases , radius increases\n");
   printf("TRANSFERS : \n");
   while(i){
       if(i==rings){
         printf("Disc %d moved to C\n",i);
         break;
       }
       printf("Disc %d moved to B\n",i);
       i++;
   }
   while(j>=1){
       printf("Disc %d moved to C\n",j);
       j--;
   }
   return 0;
}
