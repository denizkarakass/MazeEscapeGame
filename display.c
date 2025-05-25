void updateDisplay() {
    for (int row = 0; row < 8; row++) {
        uint8_t rowData = maze[row];
        if (row == playerY) {
            rowData |= (1 << playerX); // oyuncuyu ekle
        }
        MAX7219_write(row + 1, rowData);
    }
}
