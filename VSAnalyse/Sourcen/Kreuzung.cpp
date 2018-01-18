///////////////////////////////////////////////////////////
//  Kreuzung.cpp
//  Implementation of the Class Kreuzung
//  Created on:      30-Sep-2008 14:54:02
///////////////////////////////////////////////////////////

#include <windows.h>
#include <iostream>

using namespace std;

#include "Ampel.h"
#include "Kreuzung.h"


Kreuzung::Kreuzung(Ampel *a1, Ampel *a2, Ampel *a3)
	:a1(a1), a2(a2), a3(a3)
{

}


void Kreuzung::aus(){
	//TODO state machine implementieren
    cout << "Kreuzung::aus()" << endl;

	a1->aus();
	a2->aus();
	a3->aus();
}


void Kreuzung::blinke(){
	//TODO state machine implementieren
    cout << "Kreuzung::blinke()" << endl;

	a1->warne();
	a2->warne();
	a3->warne();
}


void Kreuzung::ein(){
    cout << "Kreuzung::ein()" << endl;

	a1->umschalten();//Gelb
	a2->umschalten();
	warten(5);//EBlinkend
	a1->umschalten();//Rot
	a2->umschalten();
	a3->umschalten();//Gelb
	warten(3); //EGelb
	a1->umschalten();//RotGelb
	a2->umschalten();
	a3->umschalten();//Rot
	warten(3); //DRotGelb
	a1->umschalten();//Grün
	a2->umschalten();
	warten(30); //Wait
	//Durchfahrt
}


void Kreuzung::einfahrtGewaehren(){
    cout << "Kreuzung::trigger(long) einfahrtGewaehren" << endl;

	a1->umschalten();	
	a2->umschalten();	//Gelb
	warten(5);
	a1->umschalten();	
	a2->umschalten();	//Rot
	a3->umschalten();	//RotGelb
	warten(3);
	a3->umschalten();	//Grün
	warten(20);
	a3->umschalten();	//Gelb
	warten(3);
	a1->umschalten();	
	a2->umschalten();	//RotGelb
	a3->umschalten();	//Rot
	warten(3);
	a1->umschalten();	
	a2->umschalten();	//Grün
	warten(30); //wait
	//Durchfahrt
}


void Kreuzung::warten(int s){
	Sleep(1000* s);
}