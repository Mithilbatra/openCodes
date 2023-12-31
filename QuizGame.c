#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

//Define ANSI escape codes for colour
#define RED     "\x1B[31m"
#define GREEN   "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define RESET   "\x1B[0m"

//Print seperator line function
void printSeparator() {
printf("\n----------------------------------------------------------------------------------------------\n");
}

//score counter initialised to 0
int score=0;
int coun=0;
int timeLimit = 10;
int remainingTime = 10;
void askAudience(char optionA[], char optionB[], char optionC[], char optionD[]) {
    // Simulate audience poll lifeline
    static int i=0;
    if(i==1){
        printSeparator();
        printf(YELLOW "\nYou dont have any more lifelines\n" RESET);
        printSeparator();
        return;
    }
    int totalVotes = 100;
    int votesA = rand()%(totalVotes + 1);
    int votesB = rand()%(totalVotes - votesA + 1);
    int votesC = rand()%(totalVotes - votesA - votesB + 1);
    int votesD = totalVotes - votesA - votesB - votesC;
    
    printSeparator();
    printf("Audience Response:\n");
    printf("A. %s: %d%%\n", optionA, votesA);
    printf("B. %s: %d%%\n", optionB, votesB);
    printf("C. %s: %d%%\n", optionC, votesC);
    printf("D. %s: %d%%\n", optionD, votesD);
    printSeparator();
    i++;
}

int switchquestion(){
    //simulate switch question lifeline
    static int j=0;
    char chh;
    int str=0;
    j++;
    char answer;
    if(j==1){
        printSeparator();
        printf("Updated question - \n");
        printf("What is the latest standard in C language?\n");
        printf("A. %s\n", "C89 Standard");
        printf("B. %s\n", "C99 Standard");
        printf("C. %s\n", "C11 Standard");
        printf("D. %s\n", "C23 Standard");
        printf("\nYour answer (A/B/C/D): ");
        scanf(" %c", &answer);
        int d=(int)answer;
        if(d>=101 || d>=69 && d<=90){
            printf("Wrong Input. Input Answer from A,B,C,D\n");
            printf("Your answer : ");
            scanf(" %c",&answer);
        }
        int c=(int)answer;
        if(c>=97 && c<=100){
             c=c-32;
        }
        answer=(char)c;
        if(answer=='D'){
            printf(GREEN "Correct!\n" RESET);
            str=1;
            return str;
        }else{
            printf(RED "Incorrect. The correct answer is %c.\n" RESET ,'D');
            str=0;
            return str;
        }
    }else if(j==2){
        printSeparator();
        printf(YELLOW "You dont have any more lifelines\n" RESET);
        printSeparator();
        // Display the countdown starting from 10 and decreasing
    while (remainingTime > 0) {
        printf("Time remaining: %2d...   \r", remainingTime);  // Display the current time remaining
        fflush(stdout);  // Overwrite the existing line
        sleep(1);
        remainingTime--;
    }
    remainingTime=10;

    // Get the user's answer
    printf("\nYour answer (A/B/C/D): ");
    scanf(" %c", &chh);
    int d=(int)chh;
    if(d>=101 || d>=69 && d<=90){
        printf(RED "Wrong Input\n" RESET);
        printf("Input Answer from A,B,C,D\n");
        printf("Your answer : ");
        scanf(" %c",&chh);
    }
    int c=(int)chh;
    if(c>=97 && c<=100){
        //take both a and A as input
        c=c-32;
    }
    chh=(char)c;
    return (int)chh;
    }
    return 0;
}

int askQuestion(char question[], char optionA[], char optionB[], char optionC[], char optionD[], char correctOption, int timeLimit) {
    char userAnswer;
    int Lifelineoption=0,call=0;
    int store=0,e,counterr=0;
    int localcount=0,lifecount=0,jumpcount=0,randc=0;

    printSeparator();
    printf("\n%s\n", question);
    printf("A. %s\n", optionA);
    printf("B. %s\n", optionB);
    printf("C. %s\n", optionC);
    printf("D. %s\n", optionD);

    // Ask whether to use the lifeline
    if(coun<2){
    printf("Do you want to use a lifeline? (Press 'L' for lifeline, any other key to continue): ");
    scanf(" %c", &userAnswer);
    }else if(coun>=2){
        //Skip the lifeline input part when 2 lifelines used 
        goto Jump;
    }
    if (userAnswer == 'L' || userAnswer == 'l'){
        lifecount++; 
        printf("Which lifeline do you want (Enter 0 for Audience poll , 1 for switch question ) : ");
        scanf("%d",&Lifelineoption);
        counterr=0;
        if(Lifelineoption==0){
           askAudience(optionA, optionB, optionC, optionD);
           counterr++;
           coun++;
           randc++;
        }else if(Lifelineoption==1){
            //counter for when the lifeline has already been used once
            store=switchquestion();
            if(store==0 || store==1){
                return store;
            }
            if(store>=65 && store<=69){
                jumpcount=1;
                goto jumppp;
            }            
            coun++;
            counterr++;
            localcount++;
            goto jog;
        }
    }else{
        call++;
    }
    Jump:
    // Display the countdown starting from 10 and decreasing
    while (remainingTime > 0) {
        printf("Time remaining: %2d...   \r", remainingTime);  // Display the current time remaining
        fflush(stdout);  // Overwrite the existing line
        sleep(1);
        remainingTime--;
    }
    remainingTime=10;
    // Get the user's answer
    printf("\nYour answer (A/B/C/D): ");
    scanf(" %c", &userAnswer);
    int d=(int)userAnswer;
    if(d>=101 || d>=69 && d<=90){
        printf(RED "Wrong Input\n" RESET);
        printf("Input Answer from A,B,C,D\n");
        printf("Your answer : ");
        scanf(" %c",&userAnswer);
    }
    int c=(int)userAnswer;
    if(c>=97 && c<=100){
        //take both a and A as input
        c=c-32;
        userAnswer=(char)c;
        goto run;
    }
    if(randc==1){
     // Check if the user's answer is correct
      if (userAnswer == correctOption) {
        printf(GREEN "Correct!\n" RESET); // Green text for correct answer
        return 1; // Return 1 for a correct answer
      }else {
        printf(RED "Incorrect. The correct answer is %c.\n" RESET, correctOption); // Red text for incorrect answer
        return 0; // Return 0 for an incorrect answer
      }
    }
    jog:
    if(localcount==1){
      e=store;
      userAnswer=(char)e;
    }
    if(counterr==1 && coun==2){
    // Check if the user's answer is correct
     if (userAnswer == correctOption) {
        printf(GREEN "Correct!\n" RESET); // Green text for correct answer
        return 1; // Return 1 for a correct answer
     } else {
        printf(RED "Incorrect. The correct answer is %c.\n" RESET, correctOption); // Red text for incorrect answer
        return 0; // Return 0 for an incorrect answer
     }
    }
    run:
    if(lifecount==0){
     jumppp:
     if(jumpcount==1){
        userAnswer=(char)store;
     }
     // Check if the user's answer is correct
     if (userAnswer == correctOption) {
        printf(GREEN "Correct!\n" RESET); // Green text for correct answer
        return 1; // Return 1 for a correct answer
     } else {
        printf(RED "Incorrect. The correct answer is %c.\n" RESET, correctOption); // Red text for incorrect answer
        return 0; // Return 0 for an incorrect answer
     }
     if(call==1){
      // Check if the user's answer is correct
      if (userAnswer == correctOption) {
        call=0;
        printf(GREEN "Correct!\n" RESET); // Green text for correct answer
        return 1; // Return 1 for a correct answer
      } else {
        call=0;
        printf(RED "Incorrect. The correct answer is %c.\n" RESET, correctOption); // Red text for incorrect answer
        return 0; // Return 0 for an incorrect answer
      }
     }
     
    }
    return 0;
}

int main() 
{
    srand(time(NULL));

    //welcome message along with rules of game
    printSeparator();
    printf(YELLOW "                                   Welcome to the Quiz Game!!\n" RESET);
    printf("\nThe Rules of the game are : \n");
    printf("1. You will have to answer total 10 questions\n");
    printf("2. You will get +1 score for Correct Answer and 0 score for Incorrect Answer\n");
    printf("1. You will get 2 lifelines (0 of Audience poll , 1 of Switch Question)\n");
    printf(YELLOW "\n                                   LET THE GAMES BEGIN!!!\n" RESET);
    printSeparator();

    //questions matrix
    char questions[][100] = {
        "1. What is the capital of France?",
        "2. Which planet is known as the Red Planet?",
        "3. What is the largest mammal on Earth?",
        "4. Who wrote 'Romeo and Juliet'?",
        "5. What is the powerhouse of the cell?",
        "6. Which programming language is known for its readability and ease of use?",
        "7. What is the currency of Japan?",
        "8. What is the largest ocean on Earth?",
        "9. Who painted the Mona Lisa?",
        "10. What is the square root of 64?"
    };
    //options matrix
    char optionsA[][20] = {"Paris", "Mars", "Elephant", "Charles Dickens", "Nucleus", "Java", "Yen", "Atlantic", "Leonardo da Vinci", "8"};
    char optionsB[][20] = {"London", "Venus", "Blue Whale", "William Shakespeare", "Mitochondria", "Python", "Dollar", "Indian", "Pablo Picasso", "6"};
    char optionsC[][20] = {"Berlin", "Jupiter", "Giraffe", "Jane Austen", "Chloroplast", "C++", "Euro", "Arctic", "Vincent van Gogh", "4"};
    char optionsD[][20] = {"Madrid", "Mercury", "Lion", "Mark Twain", "Ribosome", "Ruby", "Yuan", "Pacific", "Michelangelo", "2"};

    //correct answers matrix
    char correctAnswers[] = {'A', 'A', 'B', 'B', 'B', 'B', 'A', 'D', 'A', 'A'};

    //for loop for 10 questions and calculating score
    for(int i=0;i<10;i++){
        score += askQuestion(questions[i], optionsA[i], optionsB[i], optionsC[i], optionsD[i], correctAnswers[i], timeLimit);
    }

    printSeparator();
    //final output
    printf("\nYour total score: %d out of 10\n", score);
    printSeparator();
    return 0;
}
