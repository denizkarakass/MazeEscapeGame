#include "player.h"
#include "maze.h"
#include "buzzer.h"

uint8_t playerX = 0;
uint8_t playerY = 0;

void resetPlayer() {
    playerX = 0;
    playerY = 0;
}

int isMoveValid(uint8_t x, uint8_t y) {
    return !(maze[y] & (1 << x)); // 1 = duvar → geçersiz
}

void movePlayer(char direction) {
    uint8_t newX = playerX;
    uint8_t newY = playerY;

    switch(direction) {
        case 'U': if (playerY > 0) newY--; break;
        case 'D': if (playerY < 7) newY++; break;
        case 'L': if (playerX > 0) newX--; break;
        case 'R': if (playerX < 7) newX++; break;
    }

    if (isMoveValid(newX, newY)) {
        playerX = newX;
        playerY = newY;
    } else {
        buzzError(); // yanlış hamle (duvar)
    }
}
