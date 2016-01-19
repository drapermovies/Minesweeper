/**
	Entertainment Software Development. Assignment 2, Task A.
	mines.h
	Purpose: Implements the Mine Functions

	@author Joel Draper (14015690)
	@version 1.0 16/12/2015
*/
#include "stdafx.h"
#include "mines.h"
#include "grid.h"

Grid gridClass;

/**
	Returns random mine locations to make the game unique every time.

	@param height the height of the grid
	@param width the width of the grid
	@return random mine locations
*/
void Mine::randomMine(int height, int width)
{
	srand(time(NULL));
	int mines = 10, mineRow, mineColumn;
	for (int m = 0; m < mines; m++)
	{
		mineRow = rand() % height++;
		mineColumn = rand() % width++;
		cout << mineRow << "," << mineColumn << endl;
		setMine(mineRow, mineColumn);
	}
}

/*void Mine::setNumber(int number1, int number2)
{
	mineHeight = number1;
	mineWidth = number2;
}*/

void Mine::setMine(int mRow, int mColumn)
{
	gridClass.fillGrid(mRow, mColumn);
}