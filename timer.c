#include <timer.h>
int contador=0;
int flag_opcion=0;
int contador_led=0;
#INT_TIMER0
void TIMER0(){
 if(flag_opcion==1){
 contador++;}
 output_low(PIN_D2);
set_timer0(26473.5);
}
void main()
{
   setup_timer_0(RTCC_INTERNAL | RTCC_DIV_256 );
   enable_interrupts(INT_TIMER0);
   enable_interrupts(GLOBAL);
   set_timer0(26473.5); //a
   char opcion;
   int opciones=0;
   printf("Hola examen, Pulse R para poner contador a 0, S empieze a contar A para y enviar contador actual: \r");
   while(TRUE)
   {
    if(contador_led==1){
    output_high(PIN_D2);
    contador_led=0;}
    if(kbhit()){            //01
        opcion=getch();//-+//+
        if(opcion==65 || opcion<=83 || opcion==82||opcion==13){
           printf("%c",opcion);
        }
        if(opcion==13){
            opciones=1;
        }
    }
      //TODO: User Code
   }

}
