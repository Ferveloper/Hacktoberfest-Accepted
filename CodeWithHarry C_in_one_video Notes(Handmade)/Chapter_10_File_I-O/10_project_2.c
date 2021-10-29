#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char SWG(char user, char comp);
int main()
{
    int points = 0;
    char user_choice;
    int rand_int;
    printf("***Snake*Water*Gun***\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Choose:\n");
        printf("      S/s:Snake\n");
        printf("      W/w:Water\n");
        printf("      G/g: Gun\n");
        printf("        (S/W/G):~>");
        scanf("%c", &user_choice);
        srand(time(0));
        rand_int = rand() % 10 + 1;
        char comp_choice;
        if (rand_int <= 3)
        {
            comp_choice = 's';
        }
        else if (rand_int <= 6 && rand_int > 3)
        {
            comp_choice = 'w';
        }
        else if (rand_int <= 10 && rand_int > 6)
        {
            comp_choice = 'g';
        }
        int result = SWG(user_choice, comp_choice);
        if (result == -1)
        {
            printf("You have lost!");
        }
        else if (result == 0)
        {
            printf("Tie!");
        }
        else if (result == 1)
        {
            printf("You have won!");
            points++;
        }
        else if (result == 2)
        {
            printf("\nInvalid Input!\n");
            i--;
        }
        fflush(stdin);
    }
    printf("\n******************************\n");
    printf("*      #!{SCOREBOARD}!#      *\n");
    printf("*                            *\n");
    printf("*       POINTS: %d/10         *\n", points);
    printf("*                            *\n");
    printf("******************************\n");
    return 0;
}

char SWG(char user, char comp)
{
    if ((user == 's' && comp == 'g') || (user == 'S' && comp == 'g'))
    {
        return -1;
    }
    else if ((user == 'w' && comp == 's') || (user == 'W' && comp == 's'))
    {
        return -1;
    }
    else if ((user == 'g' && comp == 'w') || (user == 'G' && comp == 'w'))
    {
        return -1;
    }
    else if ((user == 's' && comp == 's') || (user == 'S' && comp == 's'))
    {
        return 0;
    }
    else if ((user == 'w' && comp == 'w') || (user == 'W' && comp == 'w'))
    {
        return 0;
    }
    else if ((user == 'g' && comp == 'g') || (user == 'G' && comp == 'g'))
    {
        return 0;
    }
    else if ((user == 's' && comp == 'w') || (user == 'S' && comp == 'w'))
    {
        return 1;
    }
    else if ((user == 'w' && comp == 'g') || (user == 'W' && comp == 'g'))
    {
        return 1;
    }
    else if ((user == 'g' && comp == 's') || (user == 'G' && comp == 's'))
    {
        return 1;
    }
    else
    {
        return 2;
    }
}