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

	// ----------------SECTION PURELY FOR TESTING RN -------------------
	ifstream file{ "data.txt" };
	string testinput;

	bitset <12> b_1, b_2;
	bitset <1> c_out = 0;

	while (file)
	{
		file >> testinput;
		string_to_bits(b_1, testinput);
		cout << b_1 << " ";

		file >> testinput;
		string_to_bits(b_2, testinput);
		cout << b_2 << endl;
	}

	// ------------------------------------------------------------------

	//----------------- ADD & SHIFT -----------------------------

	bitset <12> r1, r2; //r1 less significant, r = result
	r1 = b_1; // Initialized r1 to multiplier
	r2 = 0; // Initialize r2 to 0s
	
	for (int i = 0; i < 12; i++)
	{
		if (r1[0] == 1)
		{
			r2 = add_bitset(r2, b_2, c_out);

		}
	}

	// ----------------------------------------------------------

	bitset<8> b1 = 0b00011001;
	bitset<8> b2 = 0b00000111;

	cout << b1 << endl;
	cout << two_comp(b1) << endl;;


	shift_db_bitset(b1,b2,c_out);

	cout << b1 << endl << b2 <<endl;
	

	string test = "10000000";
	bitset<8> b3 = 0b11111111;

	string_to_bits(b3, test);

	cout << b3 << endl;

	return 0;
}

