#include <timer.h>
int contador=0;
int flag_opcion=0;
#INT_TIMER0
void TIMER0(){
 if(flag_opcion==1){
 contador++;}
set_timer0(26473.5);
}
void main()
{
   setup_timer_0(RTCC_INTERNAL | RTCC_DIV_256 );
   enable_interrupts(INT_TIMER0);
   enable_interrupts(GLOBAL);
   set_timer0(26473.5); //a
   char opcion;
   printf("Hola examen, Pulse R para poner contador a 0, S empieze a contar A para y enviar contador actual");
   while(TRUE)
   {
    if(kbhit()){            //01
        opcion=getch();//-+//+
        if(opcion==65 || opcion<=83 || opcion==82||opcion==13){
        }
    }
      //TODO: User Code
   }

}
