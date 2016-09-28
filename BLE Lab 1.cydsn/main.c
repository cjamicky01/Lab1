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
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    /* CyGlobalIntEnable; */ /* Uncomment this line to enable global interrupts. */
    for(;;)
    {
        Pin_LEDG_Write(~Pin_LEDG_Read());
        Pin_LEDB_Write(~Pin_LEDB_Read());
        Pin_LEDR_Write(~Pin_LEDR_Read());
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
