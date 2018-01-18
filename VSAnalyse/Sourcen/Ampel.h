///////////////////////////////////////////////////////////
//  Ampel.h
//  Implementation of the Class Ampel
//  Created on:      30-Sep-2008 14:54:01
///////////////////////////////////////////////////////////

#ifndef SWITCHED_AMPEL
#define SWITCHED_AMPEL

#include "ProtocolViolationException.h"
//forward declaration
class Lampe;
/**
 * Realisierung der StateMachine mit Switch Statements und einer
 * enum {AUS, BLINKEND, ROT, ROTGELB, GELB, GRUEN}
 */
class Ampel
{
public:
	enum AmpelState
	{ AUS, ROT, GELB, ROTGELB, GRUEN, BLINKEND };

	Ampel(Lampe* rot, Lampe* gelb, Lampe* gruen);
	virtual ~Ampel(){}
	virtual void aus(); //throw (IllegalStateException);
	virtual void umschalten(); //throw (IllegalStateException);
	virtual void warne(); //throw ();

private:
	Lampe *rot;
	Lampe *gelb;
	Lampe *gruen;
	AmpelState state;

};


#endif // SWITCHED_AMPEL
