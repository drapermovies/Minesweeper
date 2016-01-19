/**
	Entertainment Software Development. Assignment 2, Task A.
	grid.cpp
	Purpose: The functions for drawing and updating the grid

	@author Joel Draper (14015690)
	@version 1.0 16/12/2015
*/

#include "stdafx.h"
#include "grid.h"

/**
	Class constructor. 
*/
Grid::Grid()
{
}

/**
	Used instead of the class constructor as it requires height and width parameters
*/
void Grid::GridA(int height, int width)
{
	int* intArray = new int[height*width];
}

/*
void Grid::setNumber(int number1, int number2)
{
	mRow = number1;
	mColumn = number2;
	//fillGrid(intArray[], mRow, mColumn);
}*/

/*void Grid::getNumber(int number1, int number2)
{
	number1 = mRow;
	number2 = mColumn;
}*/

/**
	Initialises the game grid. 
*/
void Grid::startGrid(int height, int width, char grid[])
{
	for (int h = 0; h < height; h++)
	{
		for (int w = 0; w < width; w++)
		{
			intArray[h*w] == 0;
		}
	}
}

void Grid::setGrid(int height, int width, char grid[])
{
	for (int h = 0; h < height; h++)
	{
		for (int w = 0; w < width; w++)
		{
			cout << "grid set " << endl;
			if (*intArray[h*w] == 1)
			{
				grid[h*w] = 'F ';
			}
			else if (*intArray[h*w] == 2)
			{
				grid[h*w] = '+ ';
			}
			else
			{
				grid[h*w] = '* ';
			}
		}
		cout << endl;
	}
}

/**
	Draws the game grid when called. 
*/
void Grid::drawGrid(int height, int width, char grid[])
{
	for (int h = 0; h < height; h++)
	{
		for (int w = 0; w < width; w++)
		{
			setGrid(height, width, grid);
			cout << grid[h*w];
			cout << "grid drawn. ";
		}
		cout << endl;
	}
}

/**
	Updates the grid by marking the user inputted position. 
*/
void Grid::updateGrid(int height, int width, int rowGuess, int columnGuess, int setNum)
{
	if (setNum <= 0 || setNum > 3)
	{
		setNum = 1;
	}
	*intArray[--rowGuess * --columnGuess] = setNum;
}

/**
	Places the mines in the grid
*/
void Grid::fillGrid(int mRow, int mColumn)
{
	//if (intArray[mRow*mColumn] == NULL)
	//{
		*intArray[mRow*mColumn] == 2;
		cout << "mine placed" << endl;
	//}
}

/**
	Class Deconstructor. 
	Deletes the instance of the class and the intArray. 
*/
Grid::~Grid()
{
	delete[] intArray;
}