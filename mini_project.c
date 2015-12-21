void main() {
  
start :PWM2_Init(2000);   // Initialize PWM2 module at 2KHz
//step(1):signal carré in cycle 80% for 2 s
       PWM2_Set_Duty(204);  // Set 204 duty for PWM2 in 80%  [ (80%*255)/100 ]
       PWM2_Start();        // start PWM2
       delay_ms(2000);
       PWM2_Stop();         // stop PWM2
//step(2):signal carré in cycle 10% for 2 s
       PWM2_Set_Duty(26);  // Set 26 duty for PWM2 in 10%  [ (10%*255)/100 ]
       PWM2_Start();       // start PWM2
        delay_ms(2000);
        PWM2_Stop();      // stop PWM2
        goto start;      // repeat steps
}
