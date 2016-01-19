/**
	Entertainment Software Development. Assignment 2, Task A.
	grid.h
	Purpose: Declares the functionsfor drawing and updating the grid

	@author Joel Draper (14015690)
	@version 1.0 7/12/2015
*/
#ifndef grid_h
#define grid_h
#include "mines.h"

class Grid
{
public: 
	Grid();
	int height1, width1, mRow, mColumn;
	void GridA(int height, int width);	
	//void setNumber(int number1, int number2);
	//void getNumber(int number1, int number2);	
	void setGrid(int height, int width, char grid[]);
	void startGrid(int height, int width, char grid[]);
	void drawGrid(int height, int width, char grid[]);
	void updateGrid(int height, int width, int rowGuess, int columnGuess, int setNum = 1);
	void fillGrid(int mRow, int mColumn);
	int* intArray[];	
	~Grid();
};	
#endif