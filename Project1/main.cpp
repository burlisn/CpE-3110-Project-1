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

	while (file)
	{
		file >> testinput;
		string_to_bits(mc, testinput);
		cout << mc << " ";

		file >> testinput;
		string_to_bits(mp, testinput);
		cout << mp << endl;

		add_and_shift(r1, r2, mc, mp, c_out);
		cout << r1 << r2 << endl;
	}


	return 0;
}

