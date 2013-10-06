#if !defined(BOARD_DATA_C)
#define BOARD_DATA_C

#include <inttypes.h>

/* ------------------------------------------------------------ */
/*					Data Tables									*/
/* ------------------------------------------------------------ */
/* The following declarations define data used in pin mapping.	*/
/* ------------------------------------------------------------ */

#if defined(OPT_BOARD_DATA)

/* ------------------------------------------------------------ */
/* This table is used to map from port number to the address of
** the TRIS register for the port. This is used for setting the
** pin direction.
*/
const uint32_t port_to_tris_PGM[] = {
	NOT_A_PORT,				//index value 0 is not used

#if defined(_PORTA)
	(uint32_t)&TRISA,
#else
	NOT_A_PORT,
#endif

#if defined(_PORTB)
	(uint32_t)&TRISB,
#else
	NOT_A_PORT,
#endif

#if defined(_PORTC)
	(uint32_t)&TRISC,
#else
	NOT_A_PORT,
#endif

#if defined(_PORTD)
	(uint32_t)&TRISD,
#else
	NOT_A_PORT,
#endif

#if defined(_PORTE)
	(uint32_t)&TRISE,
#else
	NOT_A_PORT,
#endif

#if defined(_PORTF)
	(uint32_t)&TRISF,
#else
	NOT_A_PORT,
#endif

#if defined(_PORTG)
	(uint32_t)&TRISG,
#else
	NOT_A_PORT,
#endif

	NOT_A_PORT,
};

/* ------------------------------------------------------------ */
/* This table is used to map the digital pin number to the port
** containing that pin.
*/
const uint8_t digital_pin_to_port_PGM[] = {
    NOT_A_PORT,     // No pin 0
    _IOPORT_PG,
    NOT_A_PORT,     // Vdd
    _IOPORT_PE,
    _IOPORT_PE,
    _IOPORT_PE,
    _IOPORT_PC,
    _IOPORT_PC,
    _IOPORT_PC,
    _IOPORT_PC,
    _IOPORT_PG,
    _IOPORT_PG,
    _IOPORT_PG,
    NOT_A_PORT,     // MCLR
    _IOPORT_PG,
    NOT_A_PORT,     // Vss
    NOT_A_PORT,     // Vdd
    _IOPORT_PA,
    _IOPORT_PE,
    _IOPORT_PE,
    _IOPORT_PB,
    _IOPORT_PB,
    _IOPORT_PB,
    _IOPORT_PB,
    _IOPORT_PB,
    _IOPORT_PB,


    _IOPORT_PB,
    _IOPORT_PB,
    _IOPORT_PA,
    _IOPORT_PA,
    NOT_A_PORT,     // AVdd
    NOT_A_PORT,     // AVss
    _IOPORT_PB,
    _IOPORT_PB,
    _IOPORT_PB,
    _IOPORT_PB,
    NOT_A_PORT,     // Vss
    NOT_A_PORT,     // Vdd
    _IOPORT_PA,
    _IOPORT_PF,
    _IOPORT_PF,
    _IOPORT_PB,
    _IOPORT_PB,
    _IOPORT_PB,
    _IOPORT_PB,
    NOT_A_PORT,     // Vss
    NOT_A_PORT,     // Vdd
    _IOPORT_PD,
    _IOPORT_PD,
    _IOPORT_PF,
    _IOPORT_PF,


    _IOPORT_PF,
    _IOPORT_PF,
    _IOPORT_PF,
    NOT_A_PORT,     // Vbus
    NOT_A_PORT,     // Vusb3v3
    _IOPORT_PG,
    _IOPORT_PG,
    _IOPORT_PA,
    _IOPORT_PA,
    _IOPORT_PA,
    _IOPORT_PA,
    NOT_A_PORT,     // Vdd
    _IOPORT_PC,
    _IOPORT_PC,
    NOT_A_PORT,     // Vss
    _IOPORT_PA,
    _IOPORT_PA,
    _IOPORT_PD,
    _IOPORT_PD,
    _IOPORT_PD,
    _IOPORT_PD,
    _IOPORT_PD,
    _IOPORT_PC,
    _IOPORT_PC,
    NOT_A_PORT,     // Vss


    _IOPORT_PD,
    _IOPORT_PD,
    _IOPORT_PD,
    _IOPORT_PD,
    _IOPORT_PD,
    _IOPORT_PD,
    _IOPORT_PD,
    _IOPORT_PD,
    _IOPORT_PD,
    NOT_A_PORT,     // Vcap
    NOT_A_PORT,     // Vdd
    _IOPORT_PF,
    _IOPORT_PF,
    _IOPORT_PG,
    _IOPORT_PG,
    _IOPORT_PA,
    _IOPORT_PA,
    _IOPORT_PE,
    _IOPORT_PE,
    _IOPORT_PG,
    _IOPORT_PG,
    _IOPORT_PG,
    _IOPORT_PE,
    _IOPORT_PE,
    _IOPORT_PE,
};

/* ------------------------------------------------------------ */
/* This table is used to map from digital pin number to a bit mask
** for the corresponding bit within the port.
*/
const uint16_t digital_pin_to_bit_mask_PGM[] = 
{
    NOT_A_PORT,

    _BV (15),
    NOT_A_PORT,
    _BV ( 5),
    _BV ( 6),
    _BV ( 7),
    _BV ( 1),
    _BV ( 2),
    _BV ( 3),
    _BV ( 4),
    _BV ( 6),
    _BV ( 7),
    _BV ( 8),
    NOT_A_PORT,
    _BV ( 9),
    NOT_A_PORT,
    NOT_A_PORT,
    _BV ( 0),
    _BV ( 8),
    _BV ( 9),
    _BV ( 5),
    _BV ( 4),
    _BV ( 3),
    _BV ( 2),
    _BV ( 1),
    _BV ( 0),


    _BV ( 6),
    _BV ( 7),
    _BV ( 9),
    _BV (10),
    NOT_A_PORT,
    NOT_A_PORT,
    _BV ( 8),
    _BV ( 9),
    _BV (10),
    _BV (11),
    NOT_A_PORT,
    NOT_A_PORT,
    _BV ( 1),
    _BV (13),
    _BV (12),
    _BV (12),
    _BV (13),
    _BV (14),
    _BV (15),
    NOT_A_PORT,
    NOT_A_PORT,
    _BV (14),
    _BV (15),
    _BV ( 4),
    _BV ( 5),


    _BV ( 3),
    _BV ( 2),
    _BV ( 8),
    NOT_A_PORT,
    NOT_A_PORT,
    _BV ( 3),
    _BV ( 2),
    _BV ( 2),
    _BV ( 3),
    _BV ( 4),
    _BV ( 5),
    NOT_A_PORT,
    _BV (12),
    _BV (15),
    NOT_A_PORT,
    _BV (14),
    _BV (15),
    _BV ( 8),
    _BV ( 9),
    _BV (10),
    _BV (11),
    _BV ( 0),
    _BV (13),
    _BV (14),
    NOT_A_PORT,


    _BV ( 1),
    _BV ( 2),
    _BV ( 3),
    _BV (12),
    _BV (13),
    _BV ( 4),
    _BV ( 5),
    _BV ( 6),
    _BV ( 7),
    NOT_A_PORT,
    NOT_A_PORT,
    _BV ( 0),
    _BV ( 1),
    _BV ( 1),
    _BV ( 0),
    _BV ( 6),
    _BV ( 7),
    _BV ( 0),
    _BV ( 1),
    _BV (14),
    _BV (12),
    _BV (13),
    _BV ( 2),
    _BV ( 3),
    _BV ( 4),
};

/* ------------------------------------------------------------ */
/* This table is used to map from digital pin number to the output
** compare number, input capture number, and timer external clock
** input associated with that pin.
*/
const uint16_t digital_pin_to_timer_PGM[] =
{
	NOT_ON_TIMER,

	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,

	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,


	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	_TIMER_OC1,		
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,


	_TIMER_OC2,
    _TIMER_OC3,
    _TIMER_OC4,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	_TIMER_OC5,		
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,

};

/* ------------------------------------------------------------ */
/* This table is used to map from the analog pin number to the
** actual A/D converter channel used for that pin.
*/
const uint8_t analog_pin_to_channel_PGM[] =
{
	0, 1, 2, 3, 4, 5, 6, 7,
    8, 9, 10, 11, 12, 13, 14, 15
};

/* ------------------------------------------------------------ */
/*				Board Customization Functions					*/
/* ------------------------------------------------------------ */
/*																*/
/* The following can be used to customize the behavior of some	*/
/* of the core API functions. These provide hooks that can be	*/
/* used to extend or replace the default behavior of the core	*/
/* functions. To use one of these functions, add the desired	*/
/* code to the function skeleton below and then set the value	*/
/* of the appropriate compile switch above to 1. This will		*/
/* cause the hook function to be compiled into the build and	*/
/* to cause the code to call the hook function to be compiled	*/
/* into the appropriate core function.							*/
/*																*/
/* ------------------------------------------------------------ */
/***	_board_init
**
**	Parameters:
**		none
**
**	Return Value:
**		none
**
**	Errors:
**		none
**
**	Description:
**		This function is called from the core init() function.
**		This can be used to perform any board specific init
**		that needs to be done when the processor comes out of
**		reset and before the user sketch is run.
*/
#if	(OPT_BOARD_INIT != 0)

void _board_init(void) {
	
}

#endif

/* ------------------------------------------------------------ */
/***	_board_pinMode
**
**	Parameters:
**		pin		- digital pin number to configure
**		mode	- mode to which the pin should be configured
**
**	Return Value:
**		Returns 0 if not handled, !0 if handled.
**
**	Errors:
**		none
**
**	Description:
**		This function is called at the beginning of the pinMode
**		function. It can perform any special processing needed
**		when setting the pin mode. If this function returns zero,
**		control will pass through the normal pinMode code. If
**		it returns a non-zero value the normal pinMode code isn't
**		executed.
*/
#if	(OPT_BOARD_DIGITAL_IO != 0)

int	_board_pinMode(uint8_t pin, uint8_t mode) {
	
	return 0;

}

#endif

/* ------------------------------------------------------------ */
/***	_board_getPinMode
**
**	Parameters:
**		pin		- digital pin number
**		mode	- pointer to variable to receive mode value
**
**	Return Value:
**		Returns 0 if not handled, !0 if handled.
**
**	Errors:
**		none
**
**	Description:
**		This function is called at the beginning of the getPinMode
**		function. It can perform any special processing needed
**		when getting the pin mode. If this function returns zero,
**		control will pass through the normal getPinMode code. If
**		it returns a non-zero value the normal getPinMode code isn't
**		executed.
*/
#if	(OPT_BOARD_DIGITAL_IO != 0)

int	_board_getPinMode(uint8_t pin, uint8_t * mode) {
	
	return 0;

}

#endif

/* ------------------------------------------------------------ */
/***	_board_digitalWrite
**
**	Parameters:
**		pin		- digital pin number
**		val		- value to write to the pin
**
**	Return Value:
**		Returns 0 if not handled, !0 if handled.
**
**	Errors:
**		none
**
**	Description:
**		This function is called at the beginning of the digitalWrite
**		function. It can perform any special processing needed
**		in writing to the pin. If this function returns zero,
**		control will pass through the normal digitalWrite code. If
**		it returns a non-zero value the normal digitalWrite code isn't
**		executed.
*/
#if	(OPT_BOARD_DIGITAL_IO != 0)

int	_board_digitalWrite(uint8_t pin, uint8_t val) {
	
	return 0;

}

#endif

/* ------------------------------------------------------------ */
/***	_board_digitalRead
**
**	Parameters:
**		pin		- digital pin number
**		val		- pointer to variable to receive pin value
**
**	Return Value:
**		Returns 0 if not handled, !0 if handled.
**
**	Errors:
**		none
**
**	Description:
**		This function is called at the beginning of the digitalRead
**		function. It can perform any special processing needed
**		in reading from the pin. If this function returns zero,
**		control will pass through the normal digitalRead code. If
**		it returns a non-zero value the normal digitalRead code isn't
**		executed.
*/
#if	(OPT_BOARD_DIGITAL_IO != 0)

int	_board_digitalRead(uint8_t pin, uint8_t * val) {
	
	return 0;

}

#endif

/* ------------------------------------------------------------ */
/***	_board_analogRead
**
**	Parameters:
**		pin		- analog channel number
**		val		- pointer to variable to receive analog value
**
**	Return Value:
**		Returns 0 if not handled, !0 if handled.
**
**	Errors:
**		none
**
**	Description:
**		This function is called at the beginning of the analogRead
**		function. It can perform any special processing needed
**		in reading from the pin. If this function returns zero,
**		control will pass through the normal analogRead code. If
**		it returns a non-zero value the normal analogRead code isn't
**		executed.
*/
#if (OPT_BOARD_ANALOG_READ != 0)

int	_board_analogRead(uint8_t pin, int * val) {

	return 0;

}

#endif

/* ------------------------------------------------------------ */
/***	_board_analogReference
**
**	Parameters:
**
**	Return Value:
**		Returns 0 if not handled, !0 if handled.
**
**	Errors:
**		none
**
**	Description:
**		This function is called at the beginning of the analogReference
**		function. It can perform any special processing needed
**		to set the reference voltage. If this function returns zero,
**		control will pass through the normal analogReference code. If
**		it returns a non-zero value the normal analogReference code isn't
**		executed.
*/
#if (OPT_BOARD_ANALOG_READ != 0)

int	_board_analogReference(uint8_t mode) {

	return 0;

}

#endif

/* ------------------------------------------------------------ */
/***	_board_analogWrite
**
**	Parameters:
**		pin		- pin number
**		val		- analog value to write
**
**	Return Value:
**		Returns 0 if not handled, !0 if handled.
**
**	Errors:
**		none
**
**	Description:
**		This function is called at the beginning of the analogWrite
**		function. It can perform any special processing needed
**		in writing to the pin. If this function returns zero,
**		control will pass through the normal analogWrite code. If
**		it returns a non-zero value the normal analogWrite code isn't
**		executed.
*/
#if (OPT_BOARD_ANALOG_WRITE != 0)

int	_board_analogWrite(uint8_t pin, int val) {

	return 0;

}

#endif

#endif // OPT_BOARD_DATA

/* ------------------------------------------------------------ */

#endif	// BOARD_DATA_C

/************************************************************************/
