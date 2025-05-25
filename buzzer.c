void buzzError() {
    RD0 = 1;
    __delay_ms(100);
    RD0 = 0;
}
