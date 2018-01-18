/*
 * main.cpp
 *
 *  Created on: 25.01.2015
 *      Author: Gerd
 */

#include "Game.h"

#include <iostream>
using namespace std;

int global = 0;
int main(){
	int local = 0xAA55;
	cout << "DemoExpressionView" << endl;
	{
		cout << "begin Block" << endl;
		Game game;
		global = 3;
		local = 0;
		cout << "end Block" << endl;
	}
	cout << "end DemoExpressionView" << endl;
}

