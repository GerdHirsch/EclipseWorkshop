
#include "verkehrssteuerung.h"

#include "Lampe.h"
#include "Ampel.h"
#include "Kreuzung.h"
#include "Sensor.h"

#include <iostream>
using namespace std;

void testAmpelNormalerAblauf();
void testAmpelFalscheBenutzung();


int main(int argc, char* args[]){
	cout << "==== begin main() "<< endl;

//	testAmpelNormalerAblauf();
//	testAmpelFalscheBenutzung();


	cout << "==== Verkehrssteuerung v; "<< endl;
	Verkehrssteuerung v;

	cout << "==== v.inBetriebNehmen();"<< endl;
	v.inBetriebNehmen();

	cout << "==== v.sensor->externalSignal();"<< endl;
	v.sensor->externalSignal();

	cout << "==== v.ausserBetriebNehmen();"<< endl;
	v.ausserBetriebNehmen();

	cout << "==== end main() "<< endl;
	return 0;
}
void testAmpelNormalerAblauf(){
	cout << "==== testAmpelNormalerAblauf()"<< endl;

	Lampe rot("rot"), gelb("gelb"), gruen("gruen");
	Ampel a(&rot, &gelb, &gruen);

	cout << "Objekte erzeugt"<< endl;
	try{
		a.warne();
		cout << "===== Blinkend" << endl;
		a.umschalten(); //Gelb
		cout << "===== Gelb" << endl;
		a.umschalten(); //Rot
		cout << "===== Rot" << endl;
		a.umschalten(); // RotGelb
		cout << "===== RotGelb" << endl;
		a.umschalten(); // Grün
		cout << "===== Grün" << endl;
		a.umschalten(); // Gelb
		cout << "===== Gelb" << endl;
		a.warne(); // Blinkend
		cout << "===== Blinkend" << endl;
		a.aus(); // aus
		cout << "===== Aus" << endl;
	}catch(ProtocolViolationException& e){
		cout << "catch: " << e.what() << endl;
	}
	cout << "Test durchgeführt"<< endl;

}
void testAmpelFalscheBenutzung(){
	cout << "====testAmpelFalscheBenutzung()"<< endl;
	
	Lampe rot("rot"), gelb("gelb"), gruen("gruen");
	Ampel a(&rot, &gelb, &gruen);
	
	cout << "Objekte erzeugt"<< endl;
	try{
		a.umschalten(); //Aus
	}catch(ProtocolViolationException& e){
		cout << "catch: Test umschalten Erfolgreich Exception: " << e.what() << endl;
	}
	try{
		a.warne(); 
		a.umschalten();// Betrieb
		a.aus();
	}catch(ProtocolViolationException& e){
		cout << "catch: Test aus Erfolgreich Exception: " << e.what() << endl;
	}

}
