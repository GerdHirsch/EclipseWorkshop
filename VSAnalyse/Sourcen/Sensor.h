///////////////////////////////////////////////////////////
//  Sensor.h
//  Implementation of the Class Sensor
//  Created on:      30-Sep-2008 14:54:03
///////////////////////////////////////////////////////////

#ifndef SENSOR_H
#define SENSOR_H

class Kreuzung;

class Sensor
{

public:
	Sensor(Kreuzung* listener);
	virtual ~Sensor();
	void externalSignal();

private:
	Kreuzung *kreuzung;
};

#endif //SENSOR_H
