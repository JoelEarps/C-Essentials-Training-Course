// recursive-factorial.cpp by Bill Weinman <http://bw.org/>
// updated for C++ EssT 2018-08-09
#include <cstdio>
using namespace std;

unsigned long int factorial( unsigned long int n ) {
    if( n < 2 ) return 1;
    return factorial( n - 1 ) * n;
}

int main() {
    unsigned long int n = 5;
    printf("Factorial of %ld is %ld\n", n, factorial(n));
    return 0;
}

//recrursive function is a function that refers to itself e.g. factorial
//every call memory is allocated for function call overhead on the stack - better to use a loop
 