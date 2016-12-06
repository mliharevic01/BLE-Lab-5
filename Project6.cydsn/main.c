
#include <project.h>

int main()
{
    uint8 ch;
    
    UART_Start();
    
    for(;;)
    {
        ch = UART_UartGetChar();
        
        if(0u != ch)
        {
         UART_UartPutChar(ch);   
        }   
    }
}


