
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