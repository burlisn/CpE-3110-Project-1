

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

    c_out = 0; //c_out gets reset to 0 after shift

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

template <size_t T>
void add_and_shift(bitset<T>& r1, bitset<T>& r2, bitset<T>& mc, bitset<T>& mp, bitset<1>& c_out)
{
    r1 = 0; // Initialized r1 to 0s
    r2 = mp; // Initialize r2 to multiplier

    for (int i = 0; i < 12; i++)
    {
        if (r2[0] == 1)
        {
            r1 = add_bitset(r1, mc, c_out);
            shift_db_bitset(r1, r2, c_out);
        }
        else if (r2[0] == 0)
        {
            shift_db_bitset(r1, r2, c_out);
        }
    }
}