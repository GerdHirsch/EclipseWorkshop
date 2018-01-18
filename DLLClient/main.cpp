/*
created 31.03.2014
Gerd
*/
#include<iostream>
#include <cstdlib>
#include<DLLClass.h>

using namespace std;

int main(){
	cout << "begin DLLClient" << endl;

	cout << "PATH:" << getenv("PATH") << endl;
//	cout << "BATH:" << getenv("BATH") << endl;

	DLLClass o;
	o.operation();
	cout << "end DLLClient" << endl;
}
