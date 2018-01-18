/*
 * Game.h
 *
 *  Created on: 25.01.2015
 *      Author: Gerd
 */

#ifndef GAME_H_
#define GAME_H_
/**
 * Demo for ExpressionView
 * Outputs internal structure with Method
 */

class Game {
public:
	Game() : i1(0), i2(1), i3(2), i4(3) {}
private:
	void printValues();
	int i1, i2, i3, i4;
};

#endif /* GAME_H_ */
