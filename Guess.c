#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

    const int MIN = 1;
    const int MAX = 100;   
    int guess;
    int guesses;
    int answer;

    srand(time(0));

    answer = (rand() % MAX) + MIN;

    do
    {
     printf("Enter a guess: ");
     scanf("%d", &guess);

     if (guess > answer)
     {
          printf("Go lower\n");
     }
     else if (guess < answer)
     {
          printf("Go higher\n");
     }
     else 
     {
          printf("Correct\n");
     }
      guesses++;
    } while (guess != answer);

    printf("***************\n");
    printf("Answer =  %d\n", guess);
    printf("Guesses = %d\n", guesses);
    printf("***************");
    
    
     return 0;
}