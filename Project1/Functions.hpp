

template <size_t T>
bitset<T> add_bitset(const bitset<T> b1, const bitset<T> b2, bitset<1>& c_out)
{
    bitset<T> result = 0;

    
    for(int i = 0; i < b1.size(); i++)
    {
        result[i] = (b1[i] ^ b2[i]) ^ c_out[0];
        c_out[0] = ((b1[i] & b2[i]) | (c_out[0] & (b1[i] ^ b2[i])));
    }

    return result;
}

template <size_t T>
bitset<T> two_comp(const bitset<T> b1)
{
    bitset<1> c_out = 0;
    bitset<T> comp = ~b1;
    bitset<T> plus_one = 1;
    
    comp = add_bitset(comp,plus_one, c_out);

    return comp;

}

template <size_t T>
void shift_db_bitset(bitset<T> &b1, bitset<T> &b2, bitset<1> &c_out) //b1 more significant
{
    bool last_bit = b1[0];

    b1 >>= 1;
    b2 >>= 1;

    b1[T - 1] = c_out[0];
    b2[T-1] = last_bit;

}

template <size_t T>
void string_to_bits(bitset<T> &b1, string input)
{
    int number =0;
    b1 = 0;

    // Portion takes care of leading zeros if input is not size 12
    int leadingZeros = T - input.size();
    int numberSize = T - (T-input.size());

    for (int i = T-1; i >= leadingZeros; i--)
    {
        b1[i] = 0;
    }

    // Portion converts string values to bitset values
    for(int i = 0; i < input.size(); i++)
    {
        number = input[i];
        if (number == 49)
        {
            b1[numberSize-i-1] = 1;
        }

        else if(number == 48)
        {
            b1[numberSize-i-1] = 0;
        }
        else
        {
            throw out_of_range("non binary string");
        }
    
    }
}