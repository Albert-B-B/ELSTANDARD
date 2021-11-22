void ADC_Init()
{
  ADCON0 = 0b00010101;               
  ADCON1 = 0b00010000;               
}
//Husk at ADC oin nummer ikke er lig Ben pin nummer
int ADC_Read(int pin)
{
  ADCON0 = 1 + (pin * 4);
  __delay_ms(2);               
  GO_nDONE = 1;                
  while(GO_nDONE);             
  return (ADRESH); 
}