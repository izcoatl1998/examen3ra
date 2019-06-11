#include <timer.h>

void main()
{
   setup_timer_0(RTCC_INTERNAL | RTCC_DIV_256 );
   enable_interrupts(INT_TIMER0);
   enable_interrupts(GLOBAL);
   set_timer0(26473.5); //a
   while(TRUE)
   {


      //TODO: User Code
   }

}
