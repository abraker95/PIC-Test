/*
 * File:   main.c
 * Author: abraker
 * Created on November 13, 2016, 3:48 PM
 */

#define FCY 8000000UL

#include <xc.h>
#include <Libpic30.h>

int main(void) 
{
  TRISB = 0x00;
 
  while(1)
  { 
    LATBbits.LATB5 = 1;
    __delay_ms(1000);
    LATBbits.LATB5 = 0;
    __delay_ms(1000);
  }
  
  return 0;
}