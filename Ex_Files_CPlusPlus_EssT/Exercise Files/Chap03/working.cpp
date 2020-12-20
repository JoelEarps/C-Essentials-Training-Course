// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;
typedef unsigned char points_t; //name type defs with _t
typedef unsigned char rank_t;

struct score{
    points_t p;
    rank_t r;
};

int & f(int & i){
    return ++i;
}

int main()
{
    //puts("Hello, World!");
    score s = {5,1};
    printf("score s has %d points and rank of %d\n", s.p, s.r);
    return 0;
}
//\"" is how you add quotes, all escape characters start with a "\"
// \t is a tab, can do most unicode character wth hexa unit code point \u03c is a greek letter u
// reference works like a pointer - it does not involve using the address of an operator
//cannot take a reference to a reference

