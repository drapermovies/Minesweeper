/**
	Entertainment Software Development. Assignment 2, Task A.
	mines.h
	Purpose: Declares the Mine Functions

	@author Joel Draper (14015690)
	@version 1.0 7/12/2015
*/
#ifndef mines_h
#define mines_h
#include <iostream>
#include <time.h>
using namespace std;

class Mine
{
public:
	void randomMine(int height, int width);
	//void setNumber(int number1, int number2);
	void setMine(int mRow, int mColumn);
};
#endif