void mypwm_init(){
// Initialize PWM2 module at 2KHz
  CCP2CON = 0x0C;            // PWM mode(CCP2M2,CCP2M3 active)
  T2CON = 0x02;              // timer2 prescalar 16
  PR2 = 62;                 // Timer2 max value is (8MHz / 4*16*2kHz)-1 = 62
}
 void mypwm_Set_Duty (unsigned char duty)// the duty variable must be either 10 or 80
       {
         switch (duty) {  
         case 10: CCPR2L =25; break;     // CCP2 compare value is 25 for 10%duty cycle
         case 80: CCPR2L =201; break;    //set 201 duty for PWM2 in 80%
         default:CCPR2L=0;
         }
       }
void mypwm_stat(){
T2CON=T2CON | 0x04;  // Timer2 ON
}
void main(){
         //  CCP2  is output
          TRISC.RC1 = 0;
          mypwm_init();
          mypwm_stat();
          while (1)
          {   //repeat steps
              mypwm_Set_Duty(10);
              delay_ms(2000);  // 2000 ms delay
              mypwm_Set_Duty(80);
              delay_ms(2000);  // 2000 ms delay
           }
    }


   












     
     
   
         
