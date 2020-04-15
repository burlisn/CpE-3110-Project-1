
#include <iostream>
#include <bitset>
using namespace std;


template <size_t T>
bitset<T> add_bitset(const bitset<T> b1, const bitset<T> b2, bitset<1>& c_out);

template <size_t T>
bitset<T> two_comp(const bitset<T> b1);

template <size_t T>
void shift_db_bitset(bitset<T> &b1, bitset<T> &b2, bitset<1>& c_out);

template <size_t T>
void string_to_bits(bitset<T> &b1, string input);

template <size_t T>
void add_and_shift(bitset<T>& r1, bitset<T>& r2, bitset<T>& mc, bitset<T>& mp, bitset<1>& c_out);


#include "Functions.hpp"