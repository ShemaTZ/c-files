#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main(void)
{
     
     char questions[][100] = {"1. What is the largest continent in the world?",
                              "2. What is the largest ocean in the world? ",
                              "3. Who created the universe? "};
          
     char options[][100] = {"A.Africa","B.Asia","C.Europe","D.Australia",
                            "A.Atlantic","B.Pacific","C.India","D.Caribbean",
                            "A.Human","B.Big bang","C.God","D.Satan"};
     char answers[3] = {'B','B','C'};
     char guess;
     int numOfQ = sizeof(questions)/sizeof(questions[0]);
     int score;

     for (int i = 0; i < numOfQ; i++)
     {
          printf("****************\n");
          printf("%s\n", questions[i]);
          
          for (int j = (i * 4); j < (i * 4) + 4; j++)
          {
               printf("%s\n", options[j]);
          }

          printf("guess: ");
          scanf(" %c", &guess);
        //b  scanf("%c");

          guess = toupper(guess);

          if (guess == answers[i])
          {
               printf("CORRECT");
               score++;
          }
          else
          {
              printf("Wrong!\n");
          }
     }

     printf("FINAL SCORE: %d/%d" ,score, numOfQ);


     return 0;
}