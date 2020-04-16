//////////////////////////////////////////////////////////////////////
/// @file Main.cpp
/// @author Nathan Burlis & Carter Scranton 
/// @brief header file for additional bitset functions
// Class:		CpE 3110
// Assignment:  Project 1
//////////////////////////////////////////////////////////////////////

#include <iostream>
#include <bitset>
using namespace std;

//
//
//
template <size_t T>
bitset<T> add_bitset(const bitset<T> b1, const bitset<T> b2);

template <size_t T>
bitset<T> two_comp(const bitset<T> b1);

template <size_t T>
void shift_db_bitset(bitset<T> &b1, bitset<T> &b2);

template <size_t T>
void string_to_bits(bitset<T> &b1, string input);


#include "Functions.hpp"