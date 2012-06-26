#include <avr/io.h>
#include <avr/interrupt.h>

#define bit_get(p,m) ((p) & (m))
#define bit_set(p,m) ((p) |= (m))
#define bit_clr(p,m) ((p) &= ~(m))
#define bit_flip(p,m) ((p) ^= (m))
#define bit_write(c,p,m) (c ? bit_set(p,m) : bit_clr(p,m))
#define BIT(x) (0x01 << (x))
#define LONGBIT(x) ((unsigned long)0x00000001 << (x))


void delay(unsigned int num)
{
	int i,j;
	for(i=0;i<num;i++)
		for(j=0;j<1000;j++)
			;
}

unsigned char uart_getc(void)
{
  
  /* Wait for data to be received */
  while ( !(UCSRA & (1<<RXC)) );
  
  /* Get and return received data from buffer */
  return UDR;
  
}

void uart_putc(unsigned char data)
{
  
  while ( !( UCSRA & (1<<UDRE)) );
  UDR = data;
  
}

void uart_init()
{
  UCSRA = 0x00;
  UBRRH = 0x00;  // nastaveni rychlosti pro krystal 8MHz
  UBRRL = 103;
  UCSRB = 0x18;  // povolit vysilani a prijem
  UCSRC = 0x86;  // ramec dat:  8 datovych, 1 stop bit, bez parity
}

void SPI_MasterInit(void)
{
  /* Set MOSI and SCK output */
  //DDRB |= (1<<3)|(1<<5);
  DDRB=255;
  /* Enable SPI, Master, set clock rate fck/2 */
  SPCR = (1<<SPE)|(1<<MSTR)|(1<<SPR0)|(1<<SPR1);
}

void SPI_MasterTransmit(char cData)
{
  /* Start transmission */
  SPDR = cData;
  /* Wait for transmission complete */
  while(!(SPSR & (1<<SPIF)))
    ;
}

void TimerInit()
{
  TCCR1A = 0;
  TCCR1B = (1<<WGM12)|(1<<CS10);	//CTC TOP in OCR1A
  TIMSK = (1<<OCIE1A);			//interrupt enable on compare match
  OCR1A = 33;				//value for comparison - TOP for counter
}

ISR(TIMER1_COMPA_vect)			//compare match interrupt handler
{
    //light up,wait,turn off lights,preload next 4 bytes
}

int main()
{
  
  //uart_init();
  SPI_MasterInit();

  while(1){
    SPI_MasterTransmit(3);
    delay(1000);
  }	
  return 0;
}

