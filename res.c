

#include <avr/io.h>
#include <util/delay.h>

#define  ENR1_DDR   DDRB
#define  ENR1_PORT  PORTB
#define  ENR1_bp    5

#define  ENR2_DDR   DDRB
#define  ENR2_PORT  PORTB
#define  ENR2_bp    4

#define  ENR3_DDR   DDRB
#define  ENR3_PORT  PORTB
#define  ENR3_bp    3

#define  ENR4_DDR   DDRB
#define  ENR4_PORT  PORTB
#define  ENR4_bp    2

#define  ENR5_DDR   DDRB
#define  ENR5_PORT  PORTB
#define  ENR5_bp    1

#define  ENR6_DDR   DDRB
#define  ENR6_PORT  PORTB
#define  ENR6_bp    0
 
#define  ENR7_DDR   DDRD
#define  ENR7_PORT  PORTD
#define  ENR7_bp    7

#define  ENR8_DDR   DDRD
#define  ENR8_PORT  PORTD
#define  ENR8_bp    6

#define  ENR9_DDR   DDRD
#define  ENR9_PORT  PORTD
#define  ENR9_bp    5

#define  ENR10_DDR  DDRB
#define  ENR10_PORT PORTB
#define  ENR10_bp   7

#define  ENR11_DDR  DDRB
#define  ENR11_PORT PORTB
#define  ENR11_bp   6

#define  ENR12_DDR  DDRD
#define  ENR12_PORT PORTD
#define  ENR12_bp   4

#define  ENR13_DDR  DDRD
#define  ENR13_PORT PORTD
#define  ENR13_bp   3

#define  ENR14_DDR  DDRD
#define  ENR14_PORT PORTD
#define  ENR14_bp   2

#define  ENR15_DDR  DDRC
#define  ENR15_PORT PORTC
#define  ENR15_bp   3

#define  ENR16_DDR  DDRC
#define  ENR16_PORT PORTC
#define  ENR16_bp   2

#define  ENR17_DDR  DDRC
#define  ENR17_PORT PORTC
#define  ENR17_bp   1

#define  ENR18_DDR  DDRC
#define  ENR18_PORT PORTC
#define  ENR18_bp   0

uint8_t  update_complete=0;

void ProgRes_Init(void){
  ENR1_DDR  |= (1<<ENR1_bp);
  ENR2_DDR  |= (1<<ENR2_bp);
  ENR3_DDR  |= (1<<ENR3_bp);
  ENR4_DDR  |= (1<<ENR4_bp);
  ENR5_DDR  |= (1<<ENR5_bp);
  ENR6_DDR  |= (1<<ENR6_bp);
  ENR7_DDR  |= (1<<ENR7_bp);
  ENR8_DDR  |= (1<<ENR8_bp);
  ENR9_DDR  |= (1<<ENR9_bp);
  ENR10_DDR |= (1<<ENR10_bp);
  ENR11_DDR |= (1<<ENR11_bp);
  ENR12_DDR |= (1<<ENR12_bp);
  ENR13_DDR |= (1<<ENR13_bp);
  ENR14_DDR |= (1<<ENR14_bp);
  ENR15_DDR |= (1<<ENR15_bp);
  ENR16_DDR |= (1<<ENR16_bp);
  ENR17_DDR |= (1<<ENR17_bp);
  ENR18_DDR |= (1<<ENR18_bp);
  ENR1_PORT &=~(1<<ENR1_bp);
  ENR2_PORT &=~(1<<ENR2_bp);
  ENR3_PORT &=~(1<<ENR3_bp);
  ENR4_PORT &=~(1<<ENR4_bp);
  ENR5_PORT &=~(1<<ENR5_bp);
  ENR6_PORT &=~(1<<ENR6_bp);
  ENR7_PORT &=~(1<<ENR7_bp);
  ENR8_PORT &=~(1<<ENR8_bp);
  ENR9_PORT &=~(1<<ENR9_bp);
  ENR10_PORT&=~(1<<ENR10_bp);
  ENR11_PORT&=~(1<<ENR11_bp);
  ENR12_PORT&=~(1<<ENR12_bp);
  ENR13_PORT&=~(1<<ENR13_bp);
  ENR14_PORT&=~(1<<ENR14_bp);
  ENR15_PORT&=~(1<<ENR15_bp);
  ENR16_PORT&=~(1<<ENR16_bp);
  ENR17_PORT&=~(1<<ENR17_bp);
  ENR18_PORT&=~(1<<ENR18_bp);
}

void ProgRes_Disable_All(void){
  ENR1_PORT &=~(1<<ENR1_bp);
  ENR2_PORT &=~(1<<ENR2_bp);
  ENR3_PORT &=~(1<<ENR3_bp);
  ENR4_PORT &=~(1<<ENR4_bp);
  ENR5_PORT &=~(1<<ENR5_bp);
  ENR6_PORT &=~(1<<ENR6_bp);
  ENR7_PORT &=~(1<<ENR7_bp);
  ENR8_PORT &=~(1<<ENR8_bp);
  ENR9_PORT &=~(1<<ENR9_bp);
  ENR10_PORT&=~(1<<ENR10_bp);
  ENR11_PORT&=~(1<<ENR11_bp);
  ENR12_PORT&=~(1<<ENR12_bp);
  ENR13_PORT&=~(1<<ENR13_bp);
  ENR14_PORT&=~(1<<ENR14_bp);
  ENR15_PORT&=~(1<<ENR15_bp);
  ENR16_PORT&=~(1<<ENR16_bp);
  ENR17_PORT&=~(1<<ENR17_bp);
  ENR18_PORT&=~(1<<ENR18_bp);
}

void ProgRes_Enable_Resistor1(void){
  ENR1_PORT |= (1<<ENR1_bp);
}

void ProgRes_Enable_Resistor2(void){
  ENR2_PORT |= (1<<ENR2_bp);
}

void ProgRes_Enable_Resistor3(void){
  ENR3_PORT |= (1<<ENR3_bp);
}

void ProgRes_Enable_Resistor4(void){
  ENR4_PORT |= (1<<ENR4_bp);
}

void ProgRes_Enable_Resistor5(void){
  ENR5_PORT |= (1<<ENR5_bp);
}

void ProgRes_Enable_Resistor6(void){
  ENR6_PORT |= (1<<ENR6_bp);
}

void ProgRes_Enable_Resistor7(void){
  ENR7_PORT |= (1<<ENR7_bp);
}

void ProgRes_Enable_Resistor8(void){
  ENR8_PORT |= (1<<ENR8_bp);
}

void ProgRes_Enable_Resistor9(void){
  ENR9_PORT |= (1<<ENR9_bp);
}

void ProgRes_Enable_Resistor10(void){
  ENR10_PORT |= (1<<ENR10_bp);
}

void ProgRes_Enable_Resistor11(void){
  ENR11_PORT |= (1<<ENR11_bp);
}

void ProgRes_Enable_Resistor12(void){
  ENR12_PORT |= (1<<ENR12_bp);
}

void ProgRes_Enable_Resistor13(void){
  ENR13_PORT |= (1<<ENR13_bp);
}

void ProgRes_Enable_Resistor14(void){
  ENR14_PORT |= (1<<ENR14_bp);
}

void ProgRes_Enable_Resistor15(void){
  ENR15_PORT |= (1<<ENR15_bp);
}

void ProgRes_Enable_Resistor16(void){
  ENR16_PORT |= (1<<ENR16_bp);
}

void ProgRes_Enable_Resistor17(void){
  ENR17_PORT |= (1<<ENR17_bp);
}

void ProgRes_Enable_Resistor18(void){
  ENR18_PORT |= (1<<ENR18_bp);
}

void ProgRes_Enable_Resistor(uint8_t res){
  if      (res==1){
    ProgRes_Enable_Resistor1();
  }else if(res==2){
    ProgRes_Enable_Resistor2();
  }else if(res==3){
    ProgRes_Enable_Resistor3();
  }else if(res==4){
    ProgRes_Enable_Resistor4();
  }else if(res==5){
    ProgRes_Enable_Resistor5();
  }else if(res==6){
    ProgRes_Enable_Resistor6();
  }else if(res==7){
    ProgRes_Enable_Resistor7();
  }else if(res==8){
    ProgRes_Enable_Resistor8();
  }else if(res==9){
    ProgRes_Enable_Resistor9();
  }else if(res==10){
    ProgRes_Enable_Resistor10();
  }else if(res==11){
    ProgRes_Enable_Resistor11();
  }else if(res==12){
    ProgRes_Enable_Resistor12();
  }else if(res==13){
    ProgRes_Enable_Resistor13();
  }else if(res==14){
    ProgRes_Enable_Resistor14();
  }else if(res==15){
    ProgRes_Enable_Resistor15();
  }else if(res==16){
    ProgRes_Enable_Resistor16();
  }else if(res==17){
    ProgRes_Enable_Resistor17();
  }else if(res==18){
    ProgRes_Enable_Resistor18();
  }
}

uint8_t ProgRes_Get_Update_Complete_Status(void){
  return update_complete;
}

void ProgRes_Set_Update_Complete_Status(void){
  update_complete=1;
}

void ProgRes_Clear_Update_Complete_Status(void){
  update_complete=0;
}

void ProgRes_Enable_Resistor_Update(uint8_t res){
  if(!ProgRes_Get_Update_Complete_Status()){
    ProgRes_Disable_All();
    ProgRes_Enable_Resistor(res);
	ProgRes_Set_Update_Complete_Status();
  }
}