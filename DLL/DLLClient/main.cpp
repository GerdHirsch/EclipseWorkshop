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
	cout << "DLLPath:" << getenv("DLLPath") << endl;
	cout << "git_work_tree:" << getenv("git_work_tree") << endl;
//	cout << "BATH:" << getenv("BATH") << endl;

	DLLClass o;
	o.operation();
	cout << "end DLLClient" << endl;
}
