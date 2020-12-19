// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main()
{
    int x = 7;
    int *ip = &x;
    int &y = x;

    y = 5;

    int z = 73;
    ip = &z;

    puts("Hello, World!");
    printf("The value of ip is: %d\n", *ip);
    printf("The value of x is: %d\n", x);
    printf("The value of y is: %d\n", y);

    return 0;
    
}

//reference type is a lot like pointers but with some differences
//int &y = x - integer reference y to point at x
//do you not use an aterisk to dereference a reference
//no syntax for changing a reference - changing the reference will change the varaible it is referencing
//primittive string is often called a cstring


