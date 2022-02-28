/*
Author: Sighfy
Project: ICE13A
Determine if the unsigned values contained in a 2D array
add up to a fixed constant value by row, column, and diagonal.
*/

#define MAX 3
#include <iostream>
#include <iomanip>

//Prototypes
bool IsSpecialSquare(unsigned ms[][MAX]);
void RotateSquare(unsigned ms[][MAX], bool clockwise = true);
void FlipSquare(unsigned ms[][MAX], bool topToBottom = true);
void ZeroFillArray(unsigned ms[][MAX]);
void DisplaySquare(unsigned ms[][MAX]);

using namespace std;

int main()
{
#ifndef NDEBUG
	//Prototypes for Unit Tesing
	bool Test3x3CompareSquares(unsigned g[MAX][MAX], const unsigned cg[MAX][MAX]);
	void Test3x3IsSpecialSquare();
	void Test3x3FlipSquare();
	void Test3x3RotateSquare();

	//UnComment these as you build the functions
	//Test3x3IsSpecialSquare();		//unit testing
	//Test3x3FlipSquare();			//optional test
	//Test3x3RotateSquare();		//optional test
#endif

	unsigned ms[MAX][MAX] = { 4, 9, 2, 3, 5, 7, 8, 1, 6 };
	unsigned non_ms[MAX][MAX] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	const unsigned ROTATIONS = 3; //rotate 3 times to see all 4 orientations [optional]

	//Driver for simple test
	DisplaySquare(ms);
	IsSpecialSquare(ms);

	DisplaySquare(non_ms);
	IsSpecialSquare(non_ms);



	//Driver code for optional part:
	////Show all 4 rotations
	//DisplaySquare(ms);
	//for (unsigned i = 0; i < ROTATIONS; i++)
	//{
	//	RotateSquare(ms, false);
	//	if (IsSpecialSquare(ms))
	//		DisplaySquare(ms);
	//}

	////Rotate back to original square
	//RotateSquare(ms, false);
	////Then flip it
	//FlipSquare(ms, true);
	////And Show the 4 "flipped" rotations
	//if (IsSpecialSquare(ms))
	//	DisplaySquare(ms);
	//for (unsigned i = 0; i < ROTATIONS; i++)
	//{
	//	RotateSquare(ms, false);
	//	if (IsSpecialSquare(ms))
	//		DisplaySquare(ms);
	//}

	return 0;
}




bool IsSpecialSquare(unsigned ms[][MAX])
{
	//TODO: Add code to return true if ms is a special square, false if not
	bool choice = true, uniqueSquare = true;
	int totalRow = 0,
		totalCol = 0,
		totalDiag = 0, totalDiag1 = 0, totalDiag2 = 0;
	int squareTest, duplicates;
	if (MAX % 2 != 0)
	{
		for (squareTest = 1; squareTest <= MAX * MAX; squareTest++)
		{
			duplicates = 0;
			for (unsigned row = 0; row < MAX; row++)
			{
				for (unsigned col = 0; col < MAX; col++)
				{
					if (squareTest == ms[row][col])
					{
						duplicates++;
					}
				}
			}
			if (duplicates != 1)
			{
				uniqueSquare = false;
			}
		}
		if (uniqueSquare == false)
		{
			return false;
		}
		else
		{
			for (unsigned row = 0; row < MAX; row++)
			{
				totalRow = 0;
				for (unsigned col = 0; col < MAX; col++)
				{
					totalRow += ms[row][col];
				}
				if (totalRow != 15)
				{
					choice = false;
				}
			}

			for (unsigned row2 = 0; row2 < MAX; row2++)
			{
				totalCol = 0;
				for (unsigned col2 = 0; col2 < MAX; col2++)
				{
					totalCol += ms[col2][row2];
				}
				if (totalCol != 15)
				{
					choice = false;
				}
			}

			for (int row3 = 0; row3 < MAX; row3++)
			{
				totalDiag1 += ms[row3][row3];
				totalDiag2 += ms[row3][MAX - row3 - 1];
			}
			if (totalDiag1 != 15)
			{
				choice = false;
			}
			if (totalDiag2 != 15)
			{
				choice = false;
			}
		}
	}
	else
	{
		return false;
	}
	return choice;
}


/*
Optional
*/
void RotateSquare(unsigned ms[][MAX], bool clockwise)
{
	//TODO: Rotate a 2D array 90 degrees clockwise (true) or counter-clockwise (false)
}


/*
Optional
*/
void FlipSquare(unsigned ms[][MAX], bool topToBottom)
{
	//TODO: Reflect a 2D array 180 degrees vertically (true) or horizontally (false)
}


/*
parameter: unsigned 2-D array
no return value
displays the array, calls IsSpecialSquare(), and displays results
*/
void DisplaySquare(unsigned ms[][MAX])
{
	for (unsigned row = 0; row < MAX; row++)
	{
		for (unsigned col = 0; col < MAX; col++)
			cout << setw(3) << ms[row][col];
		cout << endl;
	}
	cout << (IsSpecialSquare(ms) ? "Special Square!\n\n" : "NOT a special square.\n\n");
}