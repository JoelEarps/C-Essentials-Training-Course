// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main()
{
    /*int x = 5; //assignement operator to asign new object
    int y = 42;
    if(x == y){
        puts("True");
    }
    else {
        puts("False");
    }*/ 
   // printf("x is %d\n", x);
    /*bool a = true;
    bool b = false;
    if (!(a && b)){
        puts("True");
    }
    else{
        puts("false");
    }*/


    
    struct X{
        int a;
        int b;
        char c;
        char d;
        long int e;
        long long int f;
    };

    printf("size of x is %zd\n", sizeof (X));

    puts("Hello, World!");
    return 0;
}

//arithematic operators like +, -, *, / provide temporary object that can be assigned
//% returns remainder after a division, can make numbers - and + 
//compounds assignement operators - combine assignment with an arithmetic operation e.g. x+=y - x is only being assigned once
//seperate assignment and addition x would be assigned twice x = x+y - not an issue for simple stuff but when using complex objects could cause issue
//no temo object with compound operator
//prefix and suffic versions for increment and decrement - post increment less efficient as you get a copy of the object before increment
//incrementing a pointer will make it shift from memory location to next as a pointer knows its size
//==, <=, >=, >, < - work on any scalar type
//logical operators used to compare logical conditions
// && and, || or, ! not
//ternary condtional operator is great for assigning a value
//type casting - converts one type to another 
//some happen automatically - i.e. int to long long type
//but turning long long int to int doesnt happen without the cast operator int()
//types of two casted bits of data must compatible
//sizeof() used to determine size of an object
//size_t is a typedef used to great a compatible type on every syste
//size of is an operator but can act like a function with ()

//operator presedence in order in which operators occur - use brackets if you care about it. Basic maths really! BODMASS!
