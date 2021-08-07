// Created by @NFLS-1963 on github.
// Please make sure that you have read the license before you copy this piece of file.
#include <string>

#ifndef INT_128_CXX98_CODE__
#define INT_128_CXX98_CODE__
class int128
{
    typedef long long half;
    static const half highbit=1LL<<63;
    half upper; // upper & highbit is for sign +/-
    half lower; // lower & highbit is a part of the value

    int128::int128(half l,half u):
        lower(l),upper(u)
    {}
public:
    int128(long long=0);

    // use a string to initalize it because int128 is too big for other integers
    int128(std::string);
    int128(const char * p):
        int128(std::string(p))
    {}


    operator std::string();
    long long i64() {return lower;}

    explicit operator bool();

    // operators of int128
    friend bool operator<(const int128&a,const int128&b);
    friend bool operator>(const int128&,const int128&);
    friend bool operator<=(const int128&,const int128&);
    friend bool operator>=(const int128&,const int128&);
    
    friend int128 operator+(const int128&,const int128&);
    friend int128 operator-(const int128&,const int128&);
    friend int128 operator*(const int128&,const int128&);
    friend int128 operator/(const int128&,const int128&);
    friend int128 operator%(const int128&,const int128&);
    friend int128 operator^(const int128&,const int128&);
    friend int128 operator&(const int128&,const int128&);
    friend int128 operator|(const int128&,const int128&);
    friend int128 operator<<(const int128&,const unsigned&);
    friend int128 operator>>(const int128&,const unsigned&);

    friend int128 operator~(const int128&);
    friend int128 operator+(const int128&);
    friend int128 operator-(const int128&);

    friend bool operator<(const int128&,const int128&);
    friend bool operator>(const int128&,const int128&);
    friend bool operator<=(const int128&,const int128&);
    friend bool operator>=(const int128&,const int128&);
    friend bool operator==(const int128&,const int128&);

    int128& operator+=(const int128& x) {*this=(*this)+x;return *this;}
    int128& operator-=(const int128& x) {*this=(*this)-x;return *this;}
    int128& operator*=(const int128& x) {*this=(*this)*x;return *this;}
    int128& operator/=(const int128& x) {*this=(*this)/x;return *this;}
    int128& operator%=(const int128& x) {*this=(*this)%x;return *this;}
    int128& operator^=(const int128& x) {*this=(*this)^x;return *this;}
    int128& operator&=(const int128& x) {*this=(*this)&x;return *this;}
    int128& operator|=(const int128& x) {*this=(*this)|x;return *this;}
    int128& operator<<=(const unsigned& x) {*this=(*this)<<x;return *this;}
    int128& operator>>=(const unsigned& x) {*this=(*this)>>x;return *this;}
};
bool operator<(const int128&,const int128&);
bool operator>(const int128&,const int128&);
bool operator<=(const int128&,const int128&);
bool operator>=(const int128&,const int128&);
int128 operator+(const int128&,const int128&);
int128 operator-(const int128&,const int128&);
int128 operator*(const int128&,const int128&);
int128 operator/(const int128&,const int128&);
int128 operator%(const int128&,const int128&);
int128 operator^(const int128&,const int128&);
int128 operator&(const int128&,const int128&);
int128 operator|(const int128&,const int128&);
int128 operator<<(const int128&,const unsigned&);
int128 operator>>(const int128&,const unsigned&);
int128 operator~(const int128&);
#endif