// Programmers: Nathan Burlis & Carter Scranton
// Class:		CpE 3110
// Assignment:  Project 1

#include <iostream>
#include <bitset>
#include "Header.h"
using namespace std;

int main()
{
	int iterNum; // number of iterations
	int numArith; // number of additions/subtractions


	bitset<8> b1 = 0b00011001;
	bitset<8> b2 = 0b00000111;

	cout << b1 << endl;
	cout << two_comp(b1) << endl;;


	shift_db_bitset(b1,b2);

	cout << b1 << endl << b2 <<endl;
	

	return 0;
}

