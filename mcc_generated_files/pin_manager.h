/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.35
        Device            :  PIC16LF1829
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set SDI1 aliases
#define SDI1_TRIS               TRISBbits.TRISB4
#define SDI1_LAT                LATBbits.LATB4
#define SDI1_PORT               PORTBbits.RB4
#define SDI1_WPU                WPUBbits.WPUB4
#define SDI1_ANS                ANSELBbits.ANSB4
#define SDI1_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define SDI1_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define SDI1_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define SDI1_GetValue()           PORTBbits.RB4
#define SDI1_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define SDI1_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define SDI1_SetPullup()      do { WPUBbits.WPUB4 = 1; } while(0)
#define SDI1_ResetPullup()    do { WPUBbits.WPUB4 = 0; } while(0)
#define SDI1_SetAnalogMode()  do { ANSELBbits.ANSB4 = 1; } while(0)
#define SDI1_SetDigitalMode() do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set SCK1 aliases
#define SCK1_TRIS               TRISBbits.TRISB6
#define SCK1_LAT                LATBbits.LATB6
#define SCK1_PORT               PORTBbits.RB6
#define SCK1_WPU                WPUBbits.WPUB6
#define SCK1_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define SCK1_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define SCK1_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define SCK1_GetValue()           PORTBbits.RB6
#define SCK1_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define SCK1_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define SCK1_SetPullup()      do { WPUBbits.WPUB6 = 1; } while(0)
#define SCK1_ResetPullup()    do { WPUBbits.WPUB6 = 0; } while(0)

// get/set GPIO1 aliases
#define GPIO1_TRIS               TRISCbits.TRISC6
#define GPIO1_LAT                LATCbits.LATC6
#define GPIO1_PORT               PORTCbits.RC6
#define GPIO1_WPU                WPUCbits.WPUC6
#define GPIO1_ANS                ANSELCbits.ANSC6
#define GPIO1_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define GPIO1_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define GPIO1_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define GPIO1_GetValue()           PORTCbits.RC6
#define GPIO1_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define GPIO1_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define GPIO1_SetPullup()      do { WPUCbits.WPUC6 = 1; } while(0)
#define GPIO1_ResetPullup()    do { WPUCbits.WPUC6 = 0; } while(0)
#define GPIO1_SetAnalogMode()  do { ANSELCbits.ANSC6 = 1; } while(0)
#define GPIO1_SetDigitalMode() do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set SDO1 aliases
#define SDO1_TRIS               TRISCbits.TRISC7
#define SDO1_LAT                LATCbits.LATC7
#define SDO1_PORT               PORTCbits.RC7
#define SDO1_WPU                WPUCbits.WPUC7
#define SDO1_ANS                ANSELCbits.ANSC7
#define SDO1_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define SDO1_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define SDO1_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define SDO1_GetValue()           PORTCbits.RC7
#define SDO1_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define SDO1_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define SDO1_SetPullup()      do { WPUCbits.WPUC7 = 1; } while(0)
#define SDO1_ResetPullup()    do { WPUCbits.WPUC7 = 0; } while(0)
#define SDO1_SetAnalogMode()  do { ANSELCbits.ANSC7 = 1; } while(0)
#define SDO1_SetDigitalMode() do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/