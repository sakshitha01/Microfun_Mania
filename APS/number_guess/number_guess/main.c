#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("\
			//////////////////////////////////////////\n\
			////            WELCOME!              ////\n\
			//////////////////////////////////////////\n\n");

    printf("               ,-.----.                \n");
    printf("   ,---,       \\    /  \\    .--.--.    \n");
    printf("  '  .' \\      |   :    \\  /  /    '.  \n");
    printf(" /  ;    '.    |   |  .\\ :|  :  /`. /  \n");
    printf(":  :       \\   .   :  |: |;  |  |--`   \n");
    printf(":  |   /\\   \\  |   |   \\ :|  :  ;_     \n");
    printf("|  :  ' ;.   : |   : .   / \\  \\    `.  \n");
    printf("|  |  ;/  \\   \\;   | |`-'   `----.   \\ \n");
    printf("'  :  | \\  \\ ,'|   | ;      __ \\  \\  | \n");
    printf("|  |  '  '--'  :   ' |     /  /`--'  / \n");
    printf("|  :  :        :   : :    '--'.     /  \n");
    printf("|  | ,'        |   | :      `--'---'   \n");
    printf("`--''          `---'.|                 \n");
    printf("                 `---`\n");


    system("Color 03");
    home: ;
    int number, guess;
    int attempts = 0;
    srand(time(0));
    number = rand() % 100 + 1;


    printf("Welcome to the Number Guessing Game!\n");
    printf("I'm thinking of a number between 1 and 100.\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < number) {
            printf("It is too low! Try again.\n");
        } else if (guess > number) {
            printf("It is too high! Try again.\n");
        } else {
            printf("\n\n");
            printf("Congratulations! You've guessed the number %d in %d attempts.\n", number, attempts);

            printf("\n\n");
            int opt;
            printf("Wanna play again? Press 1 for yes and 2 for no - \n");
            scanf("%d",&opt);
            if(opt==1)
                goto home;
            else
                exit(1);
        }
    }
}
