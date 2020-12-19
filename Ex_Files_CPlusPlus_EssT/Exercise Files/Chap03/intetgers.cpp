// integers.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

// a byte is 8 bits
constexpr size_t byte = 8;

int main()
{
    printf("sizeof char is %ld bits\n", sizeof(char) * byte); //8 bits
    printf("sizeof short int is %ld bits\n", sizeof(short int) * byte); // 16
    printf("sizeof int is %ld bits\n", sizeof(int) * byte);//32
    printf("sizeof long int is %ld bits\n", sizeof(long int) * byte);//32
    printf("sizeof long long int is %ld bits\n", sizeof(long long int) * byte);//64 bits - these values change depednign on system
    return 0;
}

//represent whole no.s with no fractional part
//character is an  int - minimum size neccessary to conatain a character - usually 8 bits
//short int is smallest natural size of an int - normally 16 bits
//int is 32 bits
//long int - either 32 or 64 bits
//long long int 64 bits
//most significant bit is sign for a signed bit
//cstdint can give specific sizes and signed
//put a 0 at the start of int makes oct, 0x - makes hex, 0b makes it binary;
//suffix U makes it unsiged, L for long;LL to long long


