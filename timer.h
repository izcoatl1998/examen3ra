#include <18F4620.h>
#device ADC=10

#FUSES NOWDT                    //No Watch Dog Timer

#use delay(crystal=40MHz)
#use rs232(baud=9600,parity=N,xmit=PIN_C6,rcv=PIN_C7,bits=8,stream=PORT1)   
