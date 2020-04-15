
#include <iostream>
#include <bitset>
using namespace std;


template <size_t T>
bitset<T> add_bitset(const bitset<T> b1, const bitset<T> b2);

template <size_t T>
bitset<T> two_comp(const bitset<T> b1);

template <size_t T>
void shift_db_bitset(bitset<T> &b1, bitset<T> &b2);
