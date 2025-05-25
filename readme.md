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
