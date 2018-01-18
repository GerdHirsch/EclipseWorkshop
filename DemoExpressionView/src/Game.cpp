/*
 * Game.cpp
 *
 *  Created on: 25.01.2015
 *      Author: Gerd
 */

#include "Game.h"
#include <iostream>
using namespace std;

void Game::printValues(){
	static int count = 0;
	++count;
	cout
		<< "i1: " << i1
		<< " i2: " << i2
		<< " i3: " << i3
		<< " i4: " << i4
		<< " count: " << count
	<< endl;
}

