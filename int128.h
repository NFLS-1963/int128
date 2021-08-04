#ifndef INT_128_CXX98_CODE__
#define INT_128_CXX98_CODE__
class int128
{

    long long upper;
    long long lower;
public:
    int128(long long=0);
    int128(const char *);
    int128(long long,long long);

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

    operator char*();
    operator bool();
};
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

bool operator<(const int128&,const int128&);
bool operator>(const int128&,const int128&);
bool operator<=(const int128&,const int128&);
bool operator>=(const int128&,const int128&);
bool operator==(const int128&,const int128&);
#endif