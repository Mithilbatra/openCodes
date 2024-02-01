#include <stdio.h>
#include <time.h>
#include <string.h>
#define GREEN   "\x1B[32m"
#define RESET   "\x1B[0m"

// Function to convert uppercase alphabets to lowercase 
char tolowerr(char ch){
    if(ch>='A' && ch<='Z'){
        return (ch-('A'-'a'));
    }
    return ch;
}
// Function to get the first day of the month
int getFirstDay(int year,int month) {
   struct tm timeinfo = {0};
   timeinfo.tm_year = year-1900;
   timeinfo.tm_mon = month-1;
   timeinfo.tm_mday = 1;
   mktime(&timeinfo);
   return timeinfo.tm_wday;
}
 
// Function to get the number of days in a month
int getDaysInMonth(int year,int month){
   if(month==4||month==6||month==9||month==11){
       return 30;
   }else if(month==2){
       // Check for leap year
       if((year%4==0 && year%100!=0)||(year%400==0)){
           return 29;
       }else{
           return 28;
       }
   }else{
       return 31;
   }
}
 
// Function to display the calendar for a month
void displayCalendar(int year, int month,int today){
   int firstDay = getFirstDay(year, month);
   int daysInMonth = getDaysInMonth(year, month);
 
   // Print month and year header
   char monthNames[][20] = {"January", "February", "March", "April", "May", "June",
                         "July", "August", "September", "October", "November", "December"};
   printf("\n    %s - %d\n",monthNames[month-1], year);
   printf(" Su Mo Tu We Th Fr Sa\n");
 
   // Print leading spaces
   for(int i=0;i<firstDay;i++){
       printf("   ");
   }
 
   // Print days
   for(int day=1;day<=daysInMonth;day++){
      if(day==today){
        printf(GREEN "%3d" RESET,day);
      }else{
        printf("%3d",day);
      }
       // Move to the next line after Saturday
       if((firstDay+day-1)%7== 6){
           printf("\n");
       }
   }
 
   printf("\n");
}
 
int main() {
   time_t t = time(NULL);
   struct tm* currentTime = localtime(&t);
   int year = currentTime->tm_year+1900;
   int Todaydate = currentTime->tm_mday;
   
   char monthName[20];
   printf("Enter the month name: ");
   scanf("%s", monthName);
   printf("Enter year : ");
   scanf("%d",&year);
 
   // Convert month name to lowercase for case-insensitive comparison
   for(int i=0;monthName[i];i++){
       monthName[i]=tolowerr(monthName[i]);
   }
 
   int month = -1;
   char* monthNames[] = {"january", "february", "march", "april", "may", "june",
                         "july", "august", "september", "october", "november", "december"};
 
   // Find the corresponding month index
   for(int i=0;i<12;i++){
       if(strcmp(monthName,monthNames[i])==0){
           month=i+1;
           break;
       }
   }
 
   if(month==-1){
       printf("Invalid month name.\n");
   }else{
       displayCalendar(year, month,Todaydate);
   }
   return 0;
}
