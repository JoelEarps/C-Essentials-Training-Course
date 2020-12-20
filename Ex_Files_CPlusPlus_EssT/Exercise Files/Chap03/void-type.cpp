// void-type.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

void func ( void ) { // function does not return a value, so return statement is allowed or required
    puts("this is void func ( void )");
}

int main() {
    puts("calling func()");
    func();
    return 0;
}

//used to specifcy lack of value
//a single void type like this means function takes no arguments, empty brackets like this () means no input arguments

