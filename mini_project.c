void main() {
    
     //  CCP2  is output
         TRISC.RC1 = 0;
         PWM2_Init(2000);            // Initialize PWM2 module at 2KHz
        //step(1):signal carré in cycle 80% for 2 s
       // configure CCP2
         CCP2CON = 0x0C;            // PWM mode(CCP2M2,CCP2M3 active)
         PWM2_Set_Duty(50);        // Set 50 duty for PWM2 in 80%
         CCPR2L = 50;             // CCP2 compare value is 50 for 80% duty cycle
      // configure Timer2
         PR2 = 62;               // Timer2 max value is (8MHz / 4*16*2kHz)-1 = 62
         T2CON = 0x06;          // Timer2 ON
         delay_ms(2000);
      //step(2):signal carré in cycle 10% for 2 s
         PWM2_Set_Duty(25);  // Set 25 duty for PWM2 in 10%
         CCPR2L =25 ;       // CCP2 compare value is 25 for 10%duty cycle
          while (1)
          {   //repeat steps
              CCPR2L = 50;   // CCP2 compare value is 50 for 80% duty cycle
              delay_ms(2000);
              CCPR2L=25;    // CCP2 compare value is 25 for 10%duty cycle
          }
    }
