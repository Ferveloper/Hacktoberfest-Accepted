//SINGLE-PLAYER/DUAL-PLAYER GUESSING GAME
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    char choice;
    printf("****WELCOME TO GUESSING GAME****\n");
    printf("Select The Mode:\n");
    printf("            S/s : Single Player\n");
    printf("            D/d :  Dual  Player\n");
    printf("                             :~>");
    scanf("%c", &choice);
    if (choice == 'S' || choice == 's')
    {
        /*Random Number generator*/
        int rand_int;
        srand(time(0));
        rand_int = rand() % 100 + 1;
        //printf("%d", rand_int);
        /*Random Number Generator*/
        int guess;
        int attempt_1 = 0;
        while (1 == 1)
        {
            printf("Guess The NumbeR:~>");
            scanf("%d", &guess);
            if (guess > rand_int)
            {
                printf("Incorrect Guess! Guess a smaller number!\n");
                attempt_1++;
                if (attempt_1 == 10)
                {
                    printf("GameOver! Looser! LMAO!\n");
                    printf("Attempts : %d\n", attempt_1);
                    printf("Number : %d", rand_int);
                    break;
                }
                continue;
            }
            else if (guess < rand_int)
            {
                printf("Incorrect Guess! Guess a bigger number!\n");
                attempt_1++;
                if (attempt_1 == 10)
                {
                    printf("GameOver! Looser! LMAO!\n");
                    printf("Attempts : %d\n", attempt_1);
                    printf("Number : %d", rand_int);
                    break;
                }
                continue;
            }
            else if (guess == rand_int)
            {
                printf("Voila! Your guess is correct!\n");
                attempt_1++;
                printf("Attempts : %d\n", attempt_1);
                break;
            }
        }
    }
    else if (choice == 'D' || choice == 'd')
    {
        /*Random Number generator*/
        int rand_int;
        srand(time(0));
        rand_int = rand() % 100 + 1;
        //printf("%d", rand_int);
        /*Random Number Generator*/
        int guess;
        int attempt_1 = 0;
        //int attempt_2 = 0;
        while (1 == 1)
        {
            printf("Chance : Player A\n");
            printf("Guess The NumbeR:~>");
            scanf("%d", &guess);
            if (guess > rand_int)
            {
                printf("Incorrect Guess! Guess a smaller number!\n");
                attempt_1++;

                continue;
            }
            else if (guess < rand_int)
            {
                printf("Incorrect Guess! Guess a bigger number!\n");
                attempt_1++;

                continue;
            }
            else if (guess == rand_int)
            {
                printf("Voila! Player 1 guess is correct!\n");
                attempt_1++;
                printf("Attempts of Player 1 : %d\n", attempt_1);
                break;
            }
        }

        /*Random Number generator*/
        int rand_int_2;
        srand(time(0));
        rand_int_2 = rand() % 100 + 1;
        //printf("%d", rand_int_2);
        /*Random Number Generator*/
        int guess_2;
        int attempt_2 = 0;
        while (1 == 1)
        {
            printf("Chance : Player B\n");
            printf("Guess The NumbeR:~>");
            scanf("%d", &guess_2);
            if (guess_2 > rand_int_2)
            {
                printf("Incorrect Guess! Guess a smaller number!\n");
                attempt_2++;

                continue;
            }
            else if (guess_2 < rand_int_2)
            {
                printf("Incorrect Guess! Guess a bigger number!\n");
                attempt_2++;

                continue;
            }
            else if (guess_2 == rand_int_2)
            {
                printf("Voila! Player 2 Guess is correct!\n");
                attempt_2++;
                printf("Attempts of Player 2 : %d\n", attempt_2);
                break;
            }
        }
        if (attempt_1 < attempt_2)
        {
            printf("******************************\n");
            printf("*      #!{SCOREBOARD}!#      *\n");
            printf("*                            *\n");
            printf("*   PLAYER 1: %d ATTEMPTS     *\n", attempt_1);
            printf("*                            *\n");
            printf("*   PLAYER 2: %d ATTEMPTS     *\n", attempt_2);
            printf("*                            *\n");
            printf("*     WINNER: PLAYER 1!      *\n");
            printf("*                            *\n");
            printf("*     LOOSER: PLAYER 2!      *\n");
            printf("******************************\n");
        }
        else if (attempt_2 < attempt_1)
        {

            printf("******************************\n");
            printf("*      #!{SCOREBOARD}!#      *\n");
            printf("*                            *\n");
            printf("*   PLAYER 1: %d ATTEMPTS     *\n", attempt_1);
            printf("*                            *\n");
            printf("*   PLAYER 2: %d ATTEMPTS     *\n", attempt_2);
            printf("*                            *\n");
            printf("*     WINNER: PLAYER 2!      *\n");
            printf("*                            *\n");
            printf("*     LOOSER: PLAYER 1!      *\n");
            printf("******************************\n");
        }
        else if (attempt_2 == attempt_1)
        {

            printf("******************************\n");
            printf("*      #!{SCOREBOARD}!#      *\n");
            printf("*                            *\n");
            printf("*   PLAYER 1: %d ATTEMPTS     *\n", attempt_1);
            printf("*                            *\n");
            printf("*   PLAYER 2: %d ATTEMPTS     *\n", attempt_2);
            printf("*                            *\n");
            printf("*         IT'S A TIE!        *\n");
            printf("******************************\n");
        }
    }
    else
    {
        printf("Invalid Input!\nExiting The Game...");
    }
    return 0;
}