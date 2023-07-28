void setup() {
  DDRB |= _BV(DDB5)|_BV(DDB4)|_BV(DDB3)|_BV(DDB2)|_BV(DDB1)|_BV(DDB0);
}

void loop() {
  for (int x = 0; x <=5; x++){
    PORTB ^= (1<<x);
    _delay_ms(500);
  }
}
