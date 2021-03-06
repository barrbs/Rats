/* The constructor initializes a History object that corresponds to an Arena with nRows rows and nCols columns. You may assume (i.e., you do not have to check) that it will be called with a first argument that does not exceed MAXROWS and a second that does not exceed MAXCOLS, and that neither argument will be less than 1.*/

#include "history.h"
#include <iostream>
using namespace std;

History::History(int nRows, int nCols){
	m_rows = nRows;
	m_cols = nCols;
	for (int i = 0; i < m_rows; i++) {
		for (int j = 0; j < m_cols; j++) {
			m_grid[i][j] = false;
		}
	}
}

/*The record function is to be called to notify the History object that an unpoisoned rat has eaten a poison pellet at a grid point. The function returns false if row r, column c is not within bounds; otherwise, it returns true after recording what it needs to. This function expects its parameters to be expressed in the same coordinate system as the arena (e.g., row 1, column 1 is the upper-left-most position).*/
bool History::record(int r, int c){
	if (r<1 || c<1 || r>m_rows || c>m_cols)
		return false;
	m_grid[r-1][c-1] = true;
	return true;
}

/*The display function clears the screen and displays the history grid as the posted programs do. This function does clear the screen and write an empty line after the history grid; it does not print the Press enter to continue. after the display. */
void History::display() const{
	clearScreen();
	for (int r = 0; r < m_rows; r++){
		for (int c = 0; c < m_cols; c++){
			if (m_grid[r][c])
				cout << "A";
			else
				cout << ".";
		}
		cout << endl;
	}
	cout << endl;
}