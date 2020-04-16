// Programmers: Nathan Burlis & Carter Scranton
// Class:		CpE 3110
// Assignment:  Project 1

#include <iostream>
#include <bitset>
#include <fstream> //to read from files
#include <string>
#include "Header.h"

using namespace std;

int main()
{
	int iterNum; // number of iterations
	int numArith; // number of additions/subtractions

	ifstream file{ "data.txt" };
	string testinput;

	bitset <12> mc, mp, r1, r2; //mc=multiplicand, mp=multiplier, r1=more significant resulst, r2=less significant result
	bitset <1> c_out = 0; //c_out used in add function & shift function

	file >> testinput; //DO NOT DELTE, "PART" OF WHILE LOOP TO MAKE SURE READING IS CORRECT!!!
	while (file)
	{
		string_to_bits(mc, testinput);
		cout << mc << " ";

		file >> testinput;
		string_to_bits(mp, testinput);
		cout << mp << endl;

		add_and_shift(r1, r2, mc, mp, c_out);
		cout << "Add and shift results: \n"<< r1 << r2 << endl;

		booths(r1, r2, mc, mp);
		cout << "Booth's algorithm results: \n" << r1 << r2 << endl << endl;

		file >> testinput;
	}


	return 0;
}

