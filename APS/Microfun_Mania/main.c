#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("Color 0B");
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




    printf("         __   __   __   ___                                     \n");
    printf(" |\\/| | /  ` |__) /  \\ |__  |  | |\\ |     |\\/|  /\\  |\\ | |  /\\  \n");
    printf(" |  | | \\__, |  \\ \\__/ |    \\__/ | \\|     |  | /~~\\ | \\| | /~~\\ \n");
    printf("                                                                \n");

    char name[50];
    int op;
    sleep(1);
    printf("Welcome to Microfun Mania where you have a variety of mini games to play with!\n");

    sleep(1);
    printf("We have the following selection of games ~~\n");
    sleep(1);
    printf(" 1. Guess the Number\n");
    sleep(1);
    printf(" 2. Space-Shooter\n");
    sleep(1);
    printf(" 3. Greek-31 Card game\n");

    sleep(2);
    printf("Please select appropriate options(1,2 or 3) or press 4 to quit ~~ \n");
    scanf("%d",&op);

    switch(op)
    {
        case 1:
            system("start D:\\CP\\APS\\number_guess\\number_guess\\bin\\Debug\\number_guess.exe");
            break;

        case 2:
            system("start D:\\CP\\APS\\shooter\\shooter\\bin\\Debug\\shooter.exe");
            break;

        case 3:
            system("start D:\\CP\\APS\\greek_cardgame\\greek_card_game\\bin\\Debug\\greek_card_game.exe");
            break;

        case 4:
            exit(1);
            break;

        default:
            printf("INVALID");
            break;
    }
}
