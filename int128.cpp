#include "int128.h"

// using long long to initalize an int128
int128::int128(long long l):
    int128(l,0)
{
    if (l&highbit) // equals to 'if (l<0)'
    {
        upper=~0LL; // using two's complement, it's needed to reset the digits
        lower&=~highbit; // erase highbit, because here it's for value
    }
}

int128::int128(std::string s):
    int128(0,0)
{
    for (char c:s)
    {
        c-='0';
        (*this)=(*this<<3)+(*this<<1)+int128(c);
    }
}

int128::operator std::string()
{
    std::string s;
    int128 x(*this);
    while (x)
    {
        s.push_back(x.i64()%10+'0');
        x/=10;
    }
}

