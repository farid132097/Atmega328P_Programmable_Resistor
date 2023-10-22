

#include <avr/io.h>
#include <util/delay.h>
#include "lowpower.h"
#include "res.h"

#define  DELAY 10000

int main(void){
  Sleep_Init();
  ProgRes_Init();
  ProgRes_Disable_All();
  _delay_ms(DELAY);
  
  uint8_t res_en=0;
  while(1){
      
	  if(WDT_Get_Ticks()%10==0){
	    ProgRes_Clear_Update_Complete_Status();
		res_en++;
	    if(res_en>18){
	      res_en=1;
	    }
	  }
	  
	  ProgRes_Enable_Resistor_Update(res_en);
	  Deep_Sleep();
  }
}