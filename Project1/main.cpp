//////////////////////////////////////////////////////////////////////
/// @file Main.cpp
/// @author Nathan Burlis & Carter Scranton 
/// @brief main funtcion
// Class:		CpE 3110
// Assignment:  Project 1
//////////////////////////////////////////////////////////////////////



#include <iostream>
#include <bitset>
#include <fstream> //to read from files
#include <string>
#include "Header.h"

using namespace std;

int main()
{
	int iterNum=0; // number of iterations
	int numArith=0; // number of additions/subtractions

	ifstream file{ "data.txt" };
	string testinput;

	//bitsets for every posible length
	bitset <4> mc4, mp4, r1_4, r2_4; //mc=multiplicand, mp=multiplier, r1=more significant resulst, r2=less significant result
	bitset <5> mc5, mp5, r1_5, r2_5;
	bitset <6> mc6, mp6, r1_6, r2_6;
	bitset <7> mc7, mp7, r1_7, r2_7;
	bitset <8> mc8, mp8, r1_8, r2_8;
	bitset <9> mc9, mp9, r1_9, r2_9;
	bitset <10> mc10, mp10, r1_10, r2_10;
	bitset <11> mc11, mp11, r1_11, r2_11;
	bitset <12> mc12, mp12, r1_12, r2_12; 
	bitset <1> c_out = 0; //c_out used in add function & shift function

	file >> testinput; //DO NOT DELTE, "PART" OF WHILE LOOP TO MAKE SURE READING IS CORRECT!!!
	while (file)
	{	
		//switch case that determins what length of bitset is used
		switch (testinput.length())
		{
		case 4:	//length of 4
			string_to_bits(mc4, testinput); //load values into bitset
			cout << mc4 << " ";

			file >> testinput;
			string_to_bits(mp4, testinput);
			cout << mp4 << endl << endl;

			cout << "Add and shift:" << endl; 
			add_and_shift(r1_4, r2_4, mc4, mp4, c_out); //preform add_and_shift
			cout << r1_4 << r2_4 << endl << endl;

			cout << "Booth's algorithm:" << endl; 
			booths(r1_4, r2_4, mc4, mp4); //preform Booth's algorithm
			cout << r1_4 << r2_4 << endl << endl;
			cout << "----------------------------------------------------" << endl << endl;
			break;

		case 5:	//length of 5
			string_to_bits(mc5, testinput); //load values into bitset
			cout << mc5 << " ";

			file >> testinput;
			string_to_bits(mp5, testinput);
			cout << mp5 << endl << endl;

			cout << "Add and shift:" << endl;
			add_and_shift(r1_5, r2_5, mc5, mp5, c_out); //preform add_and_shift
			cout << r1_5 << r2_5 << endl << endl;

			cout << "Booth's algorithm:" << endl; 
			booths(r1_5, r2_5, mc5, mp5); //preform Booth's algorithm
			cout << r1_5 << r2_5 << endl << endl;
			cout << "----------------------------------------------------" << endl << endl;
			break;

		case 6:		//length of 6
			string_to_bits(mc6, testinput); //load values into bitset
			cout << mc6 << " ";

			file >> testinput;
			string_to_bits(mp6, testinput);
			cout << mp6 << endl << endl;

			cout << "Add and shift:" << endl; 
			add_and_shift(r1_6, r2_6, mc6, mp6, c_out); //preform add_and_shift
			cout << r1_6 << r2_6 << endl << endl;

			cout << "Booth's algorithm:" << endl; 
			booths(r1_6, r2_6, mc6, mp6); //preform Booth's algorithm
			cout << r1_6 << r2_6 << endl << endl;
			cout << "----------------------------------------------------" << endl << endl;
			break;

		case 7: 	//length of 7
			string_to_bits(mc7, testinput); //load values into bitset
			cout << mc7 << " ";

			file >> testinput;
			string_to_bits(mp7, testinput);
			cout << mp7 << endl << endl;

			cout << "Add and shift:" << endl;
			add_and_shift(r1_7, r2_7, mc7, mp7, c_out); //preform add_and_shift
			cout << r1_7 << r2_7 << endl << endl;

			cout << "Booth's algorithm:" << endl; 
			booths(r1_7, r2_7, mc7, mp7); //preform Booth's algorithm
			cout << r1_7 << r2_7 << endl << endl;
			cout << "----------------------------------------------------" << endl << endl;
			break;

		case 8: 	//length of 8
			string_to_bits(mc8, testinput); //load values into bitsets
			cout << mc8 << " ";

			file >> testinput;
			string_to_bits(mp8, testinput);
			cout << mp8 << endl << endl;

			cout << "Add and shift:" << endl;
			add_and_shift(r1_8, r2_8, mc8, mp8, c_out);	//preform add_and_shift
			cout << r1_8 << r2_8 << endl << endl;

			cout << "Booth's algorithm:" << endl;	
			booths(r1_8, r2_8, mc8, mp8); //preform Booth's algorithm
			cout << r1_8 << r2_8 << endl << endl;
			cout << "----------------------------------------------------" << endl << endl;
			break;

		case 9:		//length of 9
			string_to_bits(mc9, testinput); //load values into bitset
			cout << mc9 << " ";

			file >> testinput;
			string_to_bits(mp9, testinput);
			cout << mp9 << endl << endl;

			cout << "Add and shift:" << endl;
			add_and_shift(r1_9, r2_9, mc9, mp9, c_out); //preform add_and_shift
			cout << r1_9 << r2_9 << endl << endl;

			cout << "Booth's algorithm:" << endl; 
			booths(r1_9, r2_9, mc9, mp9); //preform Booth's algorithm
			cout << r1_9 << r2_9 << endl << endl;
			cout << "----------------------------------------------------" << endl << endl;
			break;

		case 10:	//length of 10
			string_to_bits(mc10, testinput); //load values into bitset
			cout << mc10 << " ";

			file >> testinput;
			string_to_bits(mp10, testinput);
			cout << mp10 << endl << endl;

			cout << "Add and shift:" << endl;
			add_and_shift(r1_10, r2_10, mc10, mp10, c_out); //preform add_and_shift
			cout << r1_10 << r2_10 << endl << endl;

			cout << "Booth's algorithm:" << endl; 
			booths(r1_10, r2_10, mc10, mp10); //preform Booth's algorithm
			cout << r1_10 << r2_10 << endl << endl;
			cout << "----------------------------------------------------" << endl << endl;
			break;

		case 11:	//length of 11
			string_to_bits(mc11, testinput); //load values into bitset
			cout << mc11 << " ";

			file >> testinput;
			string_to_bits(mp11, testinput);
			cout << mp11 << endl << endl;

			cout << "Add and shift:" << endl;
			add_and_shift(r1_11, r2_11, mc11, mp11, c_out); //preform add_and_shift
			cout << r1_11 << r2_11 << endl << endl;

			cout << "Booth's algorithm:" << endl; 
			booths(r1_11, r2_11, mc11, mp11); //preform Booth's algorithm
			cout << r1_11 << r2_11 << endl << endl;
			cout << "----------------------------------------------------" << endl << endl;
			break;

		case 12:	//length of 12
			string_to_bits(mc12, testinput); //load values into bitset
			cout << mc12 << " ";

			file >> testinput;
			string_to_bits(mp12, testinput);
			cout << mp12 << endl << endl;

			cout << "Add and shift:" << endl;
			add_and_shift(r1_12, r2_12, mc12, mp12, c_out); //preform add_and_shift
			cout << r1_12 << r2_12 << endl << endl;

			cout << "Booth's algorithm:" << endl;
			booths(r1_12, r2_12, mc12, mp12); //preform Booth's algorithm
			cout << r1_12 << r2_12 << endl << endl;
			cout << "----------------------------------------------------" << endl << endl;
			break;
		}
		file >> testinput;
	}


	return 0;
}

