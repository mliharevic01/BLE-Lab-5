/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>


int main()
{
    uint8 ch;

    UART_Start();
    UART_UartPutString("CY8CKIT-042-BLE");
  
    for(;;)
    { 
        
       
        ch = UART_UartGetChar();
        if(0u != ch && !Pin_1_Read())
        {
                Pin_Red_Write(!Pin_1_Read);
                UART_UartPutString("The symbol recieved is: ");
                UART_UartPutChar(ch);
         }
          
    }
}
/* [] END OF FILE */
