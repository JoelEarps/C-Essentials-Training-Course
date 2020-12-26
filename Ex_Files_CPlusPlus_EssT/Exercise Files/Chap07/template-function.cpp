// template-function.cpp by Bill Weinman <http://bw.org/>
// updated 2018-08-18
#include <cstdio>
using namespace std;

template <typename T> //template arguement list - interchangable with the word class
T maxof ( T a, T b ) {
    return ( a > b ? a : b );
}

int main( int argc, char ** argv ) {
    int m = maxof<int>( 7, 9 ); //<int> specifys the type passed to the template
    printf("max is: %d\n", m);
    return 0;
}

//c++ supprots template functions and classes
//max value of two parameters
//cannot define template within a block
