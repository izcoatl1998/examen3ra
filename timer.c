#include <timer.h>
long contador=0;
int flag_opcion=0;
int contador_led=0;
#INT_TIMER0
void TIMER0(){
 output_low(PIN_D2);
 contador_led++;
 if(flag_opcion==1){
    contador++;
  }
 set_timer0(3036);
}
void main()
{
   setup_timer_0(RTCC_INTERNAL | RTCC_DIV_16);
   enable_interrupts(INT_TIMER0);
   enable_interrupts(GLOBAL);
   set_timer0(3036); //a
   char opcion[1];
   set_tris_D(0x00);
   printf("Hola examen, Pulse R para poner contador a 0, S empieze a contar A para y enviar contador actual: \r");
   while(TRUE)
   {
    if(contador_led==2){
      output_high(PIN_D2);
      contador_led=0;
    }
    if(kbhit()){            //01
        opcion[0]=getch();//-+//+
        if(opcion[0]==65 || opcion[0]==83 || opcion[0]==82){
           printf("%c",opcion[0]);
        }
        switch(opcion){
        case 'S':
                flag_opcion==1;
                opcion[0]=NULL;  
        break;
        case 'A':
             flag_opcion=0;
             printf("\r %li",contador);
        break;
        }
    }
      //TODO: User Code
   }

}
