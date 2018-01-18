///////////////////////////////////////////////////////////
//  Sensor.cpp
//  Implementation of the Class Sensor
//  Created on:      30-Sep-2008 14:54:03
///////////////////////////////////////////////////////////

#include "Sensor.h"
#include "Kreuzung.h"

/**
 * weiterer Parameter String ipAdresse und Port
 */
Sensor::Sensor(Kreuzung* kreuzung)
    : kreuzung(kreuzung){}

Sensor::~Sensor(){}

/**
 * m_Kreuzung.einfahrtGewaehren()
 */
void Sensor::externalSignal(){
	kreuzung->einfahrtGewaehren();	
}
