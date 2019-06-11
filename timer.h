#include <18F4620.h>
#device ADC=10

#FUSES NOWDT                 	//No Watch Dog Timer

#use delay(crystal=16MHz)
#use rs232(baud=9600,parity=N,xmit=None,rcv=None,bits=8,stream=PORT1)

