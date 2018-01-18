///////////////////////////////////////////////////////////
//  Kreuzung.h
//  Implementation of the Class Kreuzung
//  Created on:      30-Sep-2008 14:54:02
///////////////////////////////////////////////////////////

#if !defined(EA_6C098B16_62FC_44a3_A38D_3B655990FBD5__INCLUDED_)
#define EA_6C098B16_62FC_44a3_A38D_3B655990FBD5__INCLUDED_

class Ampel;

class Kreuzung 
{

public:

	Kreuzung(Ampel *a1, Ampel *a2, Ampel *a3);
	void aus();
	void blinke();
	void ein();
	void einfahrtGewaehren();

private:
	/**
	 * todo: Zustand prüfen
	 */	Ampel *a1;
	Ampel *a2;
	Ampel *a3;

	void warten(int ms);

};


#endif // !defined(EA_6C098B16_62FC_44a3_A38D_3B655990FBD5__INCLUDED_)
