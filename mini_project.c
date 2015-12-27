void main() {

     // RC1 is output
     TRISC.RC1 = 0x00;
     // configure CCP2
     CCP2CON = 0x0C; // PWM mode ( CCP2M2, CCP2M3 active)
     CCPR1 =781 ;   // CCP2 compare value is 781 for 10% duty cycle
     // configure Timer2 
     PR2 = 7811;    // Timer2  max value is (1MHz / 4*16*2kHz)-1 = 7811
     T2CON = 0x06;  // Timer2 ;Timer2 ON
  }
