#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define SCREEN_WIDTH 80
#define SCREEN_HEIGHT 24
#define PLAYER_SYMBOL 'A'
#define BULLET_SYMBOL '•'
#define ENEMY_SYMBOL 'V'

int playerX, playerY;
int bulletX, bulletY;
int enemyX, enemyY;
bool isEnemyActive;
int score;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void drawGame() {
    system("cls");
    gotoxy(playerX, playerY);
    putchar(PLAYER_SYMBOL);
    if (bulletY >= 0)
    {
        gotoxy(bulletX, bulletY);
        putchar(BULLET_SYMBOL);
    }
    if (isEnemyActive)
    {
        gotoxy(enemyX, enemyY);
        putchar(ENEMY_SYMBOL);
    }
    gotoxy(SCREEN_WIDTH - 0, 0);
    printf("Score: %d", score);
}

void updateGame()
{
    if (_kbhit())
    {
        char key = _getch();
        if (key == 'a' && playerX > 0)
        {
            playerX--;
        } else if (key == 'd' && playerX < SCREEN_WIDTH - 1)
        {
            playerX++;
        } else if (key == 'w' && bulletY < 0)
        {
            bulletX = playerX;
            bulletY = playerY - 1;
        }
    }
    if (bulletY >= 0)
    {
        bulletY--;
    }
    if (!isEnemyActive)
    {
        enemyX = rand() % SCREEN_WIDTH;
        enemyY = 0;
        isEnemyActive = true;
    } else
    {
        enemyY++;
        if (enemyY >= SCREEN_HEIGHT)
        {
            isEnemyActive = false;
        }
    }
    if (bulletY == enemyY && bulletX == enemyX)
    {
        isEnemyActive = false;
        bulletY = -1;
        score++;
    }

    if (score >= 10) {
        gotoxy(0, 0);
        printf("Game Over! You scored 10 points.\n");
        getchar();
        exit(0);
    }
    if (enemyY == playerY && enemyX == playerX) {
        gotoxy(0, 0);
        printf("Game Over! You were hit by an enemy.\n");
        getchar();
        exit(0);
    }
}

int main()
{

    system("Color 0E");
    srand(time(NULL));
    playerX = SCREEN_WIDTH / 2;
    playerY = SCREEN_HEIGHT - 1;
    bulletX = -1;
    bulletY = -1;
    isEnemyActive = true;
    score = 0;
    while (1)
    {
        drawGame();
        updateGame();
        Sleep(100);
    }

}

