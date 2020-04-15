
#include "Header.h"


template <size_t T>
bitset<T> add_bitset(const bitset<T> b1, const bitset<T> b2)
{
    bitset<1> c_out;
    bitset<T> result = 0;

    
    for(int i = 0; i < b1.size(); i++)
    {
        result[i] = (b1[i] ^ b2[i]) ^ c_out[0];
        c_out[0] = ((b1[i] & b2[i]) | (c_out[0] & (b1[i] ^ b2[i])));
    }

    if(c_out[0] == 1)
    {
        throw std::out_of_range("overflow");
    }

    return result;
}

template <size_t T>
bitset<T> two_comp(const bitset<T> b1)
{
    bitset<T> comp = ~b1;
    bitset<T> plus_one = 1;
    
    comp = add_bitset(b1,plus_one);

    return comp;

}

template <size_t T>
void shift_db_bitset(bitset<T> &b1, bitset<T> &b2)
{
    bool last_bit = 0;
    b1[0] = last_bit;
    b1 >>= 1;
    b2 >>= 1;
    b2[T-1] = last_bit;

}