// union.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <cstdint>
using namespace std;

union ipv4 { //two memebers unsiged 32 bit int and structure of 4 octets of 8 bits each
    uint32_t i32; //two different represenations of same data in the same space
    struct {
        uint8_t a;
        uint8_t b;
        uint8_t c;
        uint8_t d;
    } octets;
};

int main()
{
    union ipv4 addr;
    addr.octets = { 192, 168, 73, 42 }; //intilaised to octets member of union
    printf("addr is %d.%d.%d.%d is %08x\n",
           addr.octets.a, addr.octets.b, addr.octets.c, addr.octets.d, addr.i32 );
    return 0;
}

//same memory space for different types
//provide two different representations of the same data
//used to save space - used for crude polymorphism


