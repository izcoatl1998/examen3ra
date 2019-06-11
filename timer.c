#include <timer.h>

void main()
{
   setup_timer_0(RTCC_INTERNAL | RTCC_DIV_256 );
   enable_interrupts(INT_TIMER0);
   enable_interrupts(GLOBAL);
   set_timer0(26473.5); //a
   flag_pausa=0;
   printf("Hola examen, Pulse R para poner contador a 0, S empieze a contar A para y enviar contador actual");
   while(TRUE)
   {
    

      //TODO: User Code
   }

}
