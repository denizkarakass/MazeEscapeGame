char readDirection() {
    if (!RB0) return 'U';
    if (!RB1) return 'D';
    if (!RB2) return 'L';
    if (!RB3) return 'R';
    return 0;
}
