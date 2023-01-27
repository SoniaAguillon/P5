#include "lib/include.h"

/////////////////////////////////////////////////////////////////////////////////////////////////// VARIABLES GLOBLALES
uint8_t dc = 25;

char data_str[32];

uint16_t adc_data[3] = {0};
uint8_t i = 0;

uint8_t servo1_dc = 0;
uint8_t servo2_dc = 0;
uint8_t servo3_dc = 0;



int main(void)
{

   // uint16_t Result[2];
   // uint16_t duty[2];
    Configurar_PLL(_20MHZ);  //Confiuracion de velocidad de reloj
   //Configura_Reg_ADC0();
   //Configurar_UART7();//Yo FCLK 50MHZ Baudrate 57600
    //Configurar_GPIO(); //Se configura GPIO
    //Configura_Reg_ADC0();
    Configura_Reg_PWM1(10000);//Configuro a 10khz el pwm
   // delay_ms(1);
    //PWM_DC(pwm0, 0);
    //PWM_DC(pwm2, 0);
    //PWM_DC(pwm4, 0);

    while(1)
    {
        ///////////////////// leer ADC
        //ADC_leer_canal(adc_data);

       /*// ///////////////////// convertir ADC a DC
        servo1_dc = 2 + adc_data[0] * (12/4095.0);
        servo2_dc = 4 + adc_data[1] * (7/4095.0);
        servo3_dc = 4 + adc_data[1] * (7/4095.0);

        ///////////////////// escribir DC
        PWM_DC(pwm0, servo1_dc);
        PWM_DC(pwm2, servo2_dc);
        PWM_DC(pwm4, servo3_dc);

        ///////////////////// led
        delay_ms(50);
        GPIO_output_toggle(puertof, pin1);
        //*/
    }

}
