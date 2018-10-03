/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65
        Device            :  PIC16LF1829
        Driver Version    :  2.00
*/

/*
    (c) 2016 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */



/*
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    Slave_Setup(); // Setup slave
    uint8_t message;
    uint8_t count = 0;
    uint8_t updown = 0;
    
    
    
    while(1){
        
        SSP1BUF = count; // Set buffer (send data to master)
        __delay_ms(500);
        PIR1bits.SSP1IF = 0; // Clear IF 
        
        while(PIR1bits.SSP1IF == 0); // Wait for master
        __delay_ms(500);
        
        message = SSP1BUF; // get data out of buffer
        SPI1_Exchange8bit(message);
    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    
        
        
        // Add your application code
    }
}
*/
#define SBIT_T2CKPS1  1
char value = 0;
int count = 0;


void interrupt timer_isr()
{  
    if(TMR2IF==1)
    {
        TMR2 = 251;     /*Load the timer Value, (Note: Timervalue is 101 instead of 100 as the
                          Timer2 needs two instruction Cycles to start incrementing TMR2 */
        TMR2IF=0;       // Clear timer interrupt flag

        if(count>=1000) //500us * 2000=1000000us=1sec
        {
            count=0;
            value=~value;   // complement the value for blinking the LEDs
        }
        else
        {
            count++;  // Keep incrementing the count till it reaches 2000 to generate 1sec delay
        }
    } 
}


void main()
{    
    TRISA=0x00;    //COnfigure PORTD as output to blink the LEDs

    T2CON = 0b00000010;  // Timer2 with external freq and 16 as prescalar
    TMR2=251;       // Load the timer value for 500us delay
    TMR2IE=1;       //Enable timer interrupt bit in PIE1 register
    GIE=1;          //Enable Global Interrupt
    PEIE=1;         //Enable the Peripheral Interrupt
    TMR2ON = 1;

    while(1)
    {
        
        //__delay_ms(1000);
        PORTA = value;
        //TMR2ON = 0;
        //__delay_ms(100);
        //TMR2ON = 1;
        
    }
}