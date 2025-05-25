# Maze Escape Game with MAX7219 and PIC16F877A

The player is placed in a maze on an 8x8 LED matrix and tries to reach the exit. The player who reaches the target point without hitting the walls wins the game. A random maze can be loaded each time a new game is started.

## Hardware Components

- PIC16F877A
- MAX7219 - 8x8 LED Matrix driver
- 8x8 LED Matrix
- 4 directional buttons (UP, DOWN, LEFT, RIGHT) - for player movement
- Reset button - to restart the game
- 20MHz crystal oscillator
- Piezo buzzer - Error/success sound

## Hardware Connections

- MAX7219 → Connected via SPI protocol via PORTC
- Direction buttons → PORTB (RB0-RB3)
- Reset button → RB4
- Buzzer (optional) → RD0

## Software Features

- Player position at startup: Top left corner (0,0)
- End point: Bottom right corner (7,7) - or random
- Labyrinth walls: With fixed/predefined or randomized patterns

## Game logic:

- When the directional buttons are pressed, the player takes a step in that direction
- If there is a wall: Buzzer beeps, movement is canceled
- If the exit is reached: All LEDs flash → "You have won"

## Software Structure

Labyrinth Definition

```c
uint8_t maze[8] = {
    0b01111110,
    0b00010000,
    0b11110111,
    0b10000001,
    0b10111101,
    0b10100001,
    0b10101111,
    0b10000000
};
```

Player Control

```c
void movePlayer(Direction dir) {
    if (isMoveValid(playerX, playerY, dir)) {
        updatePlayerPosition(dir);
        updateDisplay();
    } else {
        buzzError();
    }
}
```
