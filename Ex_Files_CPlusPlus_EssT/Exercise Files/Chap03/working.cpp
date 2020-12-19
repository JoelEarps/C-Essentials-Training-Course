// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int & f(int & i){
    return ++i;
}

int main()
{
    puts("Hello, World!");
    return 0;
}
//\"" is how you add quotes, all escape characters start with a "\"
// \t is a tab, can do most unicode character wth hexa unit code point \u03c is a greek letter u
// reference works like a pointer - it does not involve using the address of an operator
//cannot take a reference to a reference

