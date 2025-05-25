while (1) {
    char dir = readDirection();
    if (dir) {
        movePlayer(dir);
        updateDisplay();
        __delay_ms(150);
    }

    if (playerX == 7 && playerY == 7) {
        displayWinAnimation();
        waitForReset();
    }
}
