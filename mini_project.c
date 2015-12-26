void main() {

          //  CCP2  is output
     TRISC.RC1 = 0x00;
     // configure CCP2
     CCP2CON = 0x0C;   // PWM mode; T1OSI, M2 active,M3 active
     CCPR1 =781 ;                // CCP2 compare value is 781 for 10% duty cycle

     // configure Timer 2
     PR2 = 7811;                  // Timer 2 max value is (1MHz / 4*16*2kHz)-1 = 7811
     T2CON = 0x7E;   // Timer 2 prescaler 16
  }
