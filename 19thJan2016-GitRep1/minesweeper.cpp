/**
	Entertainment Software Development. Assignment 2, Task A.
	minesweeper.cpp 
	Purpose: A basic minesweeper game

	@author Joel Draper (14015690)
	@version 1.0 7/12/2015
*/
#include "stdafx.h"
#include "mines.h"
#include "grid.h"

void mainOutput(int height, int width, Grid gridClass, char grid[]), endGame();
bool isRunning = true, hasFinished = false;

int main()
{
	int height = 10, width = 10;
	Mine mineClass;
	Grid gridClass;
	cout << "------------" << endl << "Welcome to Minesweeper." << endl << "------------" << endl << "Created by Joel Draper, 2015." << endl << "------------" << endl;
	char* grid = new char[height*width];
    mineClass.randomMine(height, width);
	gridClass.startGrid(height, width, grid);
	gridClass.drawGrid(height, width, grid);
	while (isRunning)
	{
		mainOutput(height, width, gridClass, grid);
		cout << "------------" << endl;
	}	
	endGame();
	delete[] grid;
	return 0;
}

/** 
	Outputs the text for the main function that runs while the game is still in progress.  

	@param height the height of the grid
	@param width the width of the grid
	@return text output for main
*/
void mainOutput(int height, int width, Grid gridClass, char grid[])
{
	int columnGuess, rowGuess;
	char action;
	bool isCurrent = true;
	cout << "Please input whether you would like to dig (input 'D') or flag (input 'F') the location. If you would like to quit, input 'Q' [Note: This is not case sensitive]";
	cin >> action;
	if (action == 'D' || action == 'd')
	{
		cout << "------------" << endl << "Please input your row guess followed by your column guess. ";
		cin >> rowGuess >> columnGuess;
		cout << "------------" << endl;
		gridClass.updateGrid(height, width, rowGuess, columnGuess);
		gridClass.drawGrid(height, width, grid);
		/*while (isCurrent)
		{
			cout << "------------" << endl << "Please input your row guess followed by your column guess. ";
			cin >> action >> columnGuess;
			cout << "------------";
			action = rowGuess;
			cout << rowGuess;
		}*/
	}
	else if (action == 'F' || action == 'f')
	{
		cout << "------------" << endl << "Please input your row guess followed by your column guess. ";
		cin >> rowGuess >> columnGuess;
		cout << "------------" << endl;
		gridClass.updateGrid(height, width, rowGuess, columnGuess);
		gridClass.drawGrid(height, width, grid);
		/*while (isCurrent)
		{
			gridClass.updateGrid(height, width, rowGuess, columnGuess);
			gridClass.drawGrid(height, width, grid);
			cout << "------------" << endl << "Please input your row guess followed by your column guess. ";
			cin >> action >> columnGuess;
			action = rowGuess;
			cout << rowGuess;
		}*/
	}
	else if (action == 'Q'  || action == 'q')
	{
		isRunning = false;
	}
}

/** 
	Outputs the text in main for the end game. 

	@return text output for the end game
*/
void endGame()
{
	bool hasWon = false;
	if (hasFinished == true && hasWon == false)
	{
		cout << "------------" << endl << "Game over. You lost. " << endl;
	}
	else if (hasFinished == true && hasWon == true)
	{
		cout << "------------" << endl << "Congratulations. You won. " << endl;
	}
	cout << "Exiting programme." << endl << "------------" << endl;
}