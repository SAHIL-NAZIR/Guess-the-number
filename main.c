#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int random_number = 0;
    int guessed_number;
    int number_of_guesses;
    time_t t;                       /* For generating  */
    srand((unsigned) time(&t));     /* a random number */
    random_number = rand() % 21;    /* with time.h     */
    printf("Guess the number! (from 0 to 20)\n");
    for(number_of_guesses = 0; number_of_guesses < 5; ++number_of_guesses)
    {
        printf("(%d tries left)\n", 5 - number_of_guesses);
        scanf("%d", &guessed_number);
        if(guessed_number == random_number)
        {
            printf("You guessed it right!\n");
            break;
        }
        else if(guessed_number > random_number)
        {
            printf("Nope! my number is less than that. Try again!\n");
            continue;
        }
        else if(guessed_number < random_number)
        {
            printf("Nope! my number is greater than that. Try again!\n");
            continue;
        }
    }
}
