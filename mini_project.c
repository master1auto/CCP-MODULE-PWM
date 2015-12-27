void main() {

     // RC1 is output
     TRISC.RC1 = 0;
     // configure CCP2
     CCP2CON = 0x0C; // PWM mode ( CCP2M2, CCP2M3 active)
     CCPR2L =6 ;   // CCP2 compare value is 62 for 10% duty cycle
     // configure Timer2 
     PR2 = 62;    // Timer2  max value is (8MHz / 4*16*2kHz)-1 = 62
     T2CON = 0x06; // Timer2 ON
  }
