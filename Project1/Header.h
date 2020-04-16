//////////////////////////////////////////////////////////////////////
/// @file Main.cpp
/// @author Nathan Burlis & Carter Scranton 
/// @brief header file for additional bitset functions
// Class:		CpE 3110
// Assignment:  Project 1
//////////////////////////////////////////////////////////////////////

//includes
#include <iostream>
#include <bitset>
using namespace std;


//________Add_bitsets_______________________//
//returns the result of the Addtion of the two passed bitsets and the carry in
//bitset 1 and bitset 2 must be the same length
//carry in must be 1 long bitset
template <size_t T>
bitset<T> add_bitset(const bitset<T> b1, const bitset<T> b2, bitset<1>& c_out);

//________2's_complement____________________//
//Returns the 2's complement of the passed bit set
//bitset can be of any size
template <size_t T>
bitset<T> two_comp(const bitset<T> b1);

//_______shift_two_registers_to_the_right___//
//Shifts the contents of both bitsets 1 & 2 together with carry in
//both bitsets must the the same length
//Carry in must be 1 long bit set and is shifted into msb of bitset 1
template <size_t T>
void shift_db_bitset(bitset<T> &b1, bitset<T> &b2, bitset<1>& c_out);

//_______convert_string_to_binary___________//
//takes the given string of binary numbers and converts it into a bitset
//bitset must be the same length or bigger than string
//throws std::out_of_range if any charater in string is not 1 or 0
template <size_t T>
void string_to_bits(bitset<T> &b1, string input);

//______add_and_shift______________________//
//multiplies multiplicand(mc) by multiplyer(mp) using the add and shift method
//results of multiplication are stored in result1(r1) and result2(r2)
//all bitsets must be of same length and c_out is a bitset of length 1
template <size_t T>
void add_and_shift(bitset<T>& r1, bitset<T>& r2, bitset<T>& mc, bitset<T>& mp, bitset<1>& c_out);

//______Booths_algorithm___________________//
//multiplies multiplicand(mc) by multiplyer(mp) using Booths algorithm
//results of multiplication are stored in result1(r1) and result2(r2)
//all bitsets must be of same length
template <size_t T>
void booths(bitset<T>& r1, bitset<T>& r2, bitset<T>& mc, bitset<T>& mp);



#include "Functions.hpp"