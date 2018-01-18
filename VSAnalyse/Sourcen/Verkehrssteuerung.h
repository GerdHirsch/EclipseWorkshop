///////////////////////////////////////////////////////////
//  Verkehrssteuerung.h
//  Implementation of the Class Verkehrssteuerung
//  Created on:      30-Sep-2008 14:54:03
///////////////////////////////////////////////////////////

#if !defined(EA_CE81EFF2_13E1_4324_9AA5_D76EC78D7827__INCLUDED_)
#define EA_CE81EFF2_13E1_4324_9AA5_D76EC78D7827__INCLUDED_

// forward declarations
class Lampe;
class Ampel;
class Kreuzung;
class Sensor;

#include <string>

class Verkehrssteuerung
{

public:
	Verkehrssteuerung();
	virtual ~Verkehrssteuerung();

	void inBetriebNehmen();
	void ausserBetriebNehmen();
	void defektBearbeiten();
	void konfigurieren();

	Sensor *sensor;

private:
	std::string ipA1Rot;
	std::string ipA1Gelb;
	std::string ipA1Gruen;
	std::string ipA2Rot;
	std::string ipA2Gelb;
	std::string ipA2Gruen;
	std::string ipA3Rot;
	std::string ipA3Gelb;
	std::string ipA3Gruen;

	Lampe *a1Rot, *a1Gelb, *a1Gruen;
	Lampe *a2Rot, *a2Gelb, *a2Gruen;
	Lampe *a3Rot, *a3Gelb, *a3Gruen;
	Ampel *a1, *a2, *a3;
	Kreuzung *kreuzung;


	long einschaltZeitpunkt;
	long ausschaltZeitpunkt;

	void blinkenTrigger();
	void timerAktivieren(int ms);

};
#endif // !defined(EA_CE81EFF2_13E1_4324_9AA5_D76EC78D7827__INCLUDED_)
