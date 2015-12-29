void mypwm_init(){
// Initialize PWM2 module at 2KHz
  CCP2CON = 0x0C;            // PWM mode(CCP2M2,CCP2M3 active)
  PR2 = 62;                 // Timer2 max value is (8MHz / 4*16*2kHz)-1 = 62
}
 void mypwm_Set_Duty ()
       {
        //step(1):signal carré in cycle 80% for 2 s
        //set 50 duty for PWM2 in 80%
        CCPR2L = 50;            // CCP2 compare value is 50 for 80% duty cycle
        T2CON = 0x06;         // Timer2 ON
        delay_ms(2000);       // 2000 ms delay
        //step(2):signal carré in cycle 10% for 2 s
        //set 25 duty for PWM2 in 10%
        CCPR2L =25 ;       // CCP2 compare value is 25 for 10%duty cycle
       }

void main(){
         //  CCP2  is output
          TRISC.RC1 = 0;
          mypwm_init();
          mypwm_Set_Duty;
          while (1)
          {   //repeat steps
              CCPR2L = 50;   // CCP2 compare value is 50 for 80% duty cycle
              delay_ms(2000);  // 2000 ms delay
              CCPR2L=25;    // CCP2 compare value is 25 for 10%duty cycle
           }
    }


   












     
     
   
         
