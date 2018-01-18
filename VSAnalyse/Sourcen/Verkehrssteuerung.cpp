///////////////////////////////////////////////////////////
//  Verkehrssteuerung.cpp
//  Implementation of the Class Verkehrssteuerung
//  Created on:      30-Sep-2008 14:54:04
///////////////////////////////////////////////////////////
#include <windows.h>

#include "Lampe.h"
#include "Ampel.h"
#include "Kreuzung.h"
#include "Sensor.h"

#include "Verkehrssteuerung.h"


Verkehrssteuerung::Verkehrssteuerung()
:
ipA1Rot		("a1.rot"),
ipA1Gelb	("a1.gelb"),
ipA1Gruen	("a1.gruen"),
ipA2Rot		("a2.rot"),
ipA2Gelb	("a2.gelb"),
ipA2Gruen	("a2.gruen"),
ipA3Rot		("a3.rot"),
ipA3Gelb	("a3.gelb"),
ipA3Gruen	("a3.gruen"),
einschaltZeitpunkt(5),
ausschaltZeitpunkt(22)
{
	a1Rot	= new Lampe(ipA1Rot);
	a1Gelb	= new Lampe(ipA1Gelb);
	a1Gruen = new Lampe(ipA1Gruen);
	a1 = new Ampel(a1Rot, a1Gelb, a1Gruen);

	a2Rot	= new Lampe(ipA2Rot);
	a2Gelb	= new Lampe(ipA2Gelb);
	a2Gruen = new Lampe(ipA2Gruen);
	a2 = new Ampel(a2Rot, a2Gelb, a2Gruen);

	a3Rot	= new Lampe(ipA3Rot);
	a3Gelb	= new Lampe(ipA3Gelb);
	a3Gruen	= new Lampe(ipA3Gruen);
	a3 = new Ampel(a3Rot, a3Gelb, a3Gruen);

	kreuzung = new Kreuzung(a1, a2, a3);


	sensor = new Sensor(kreuzung);

	//Hier Timer für ein und ausschalten konfigurieren
	//wenn in Betriebszeit dann
	//inBetriebNehmen();

}
Verkehrssteuerung::~Verkehrssteuerung(){
	delete sensor;
	delete kreuzung;
	delete a3;
	delete a3Gruen;
	delete a3Gelb;
	delete a3Rot;
	delete a2;
	delete a2Gruen;
	delete a2Gelb;
	delete a2Rot;
	delete a1;
	delete a1Gruen;
	delete a1Gelb;
	delete a1Rot;
}





void Verkehrssteuerung::ausserBetriebNehmen(){
	kreuzung->blinke();
	Sleep(2000);
	kreuzung->aus();
}
void Verkehrssteuerung::blinkenTrigger(){

}
void Verkehrssteuerung::defektBearbeiten(){

}
void Verkehrssteuerung::inBetriebNehmen(){
	kreuzung->blinke();
	Sleep(2000);
	kreuzung->ein();
}
void Verkehrssteuerung::konfigurieren(){

}
void Verkehrssteuerung::timerAktivieren(int ms){

}
