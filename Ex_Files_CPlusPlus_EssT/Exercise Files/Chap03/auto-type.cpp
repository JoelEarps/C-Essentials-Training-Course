// auto-type.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <string>
#include <typeinfo>
using namespace std;

string func() {
    return string("this is a string");
}

int main() {
    auto x = func(); //declare x with auto type and intialise with return value of func - assumes x is a string
    //could equally just put string infront of x
    printf("x is %s\n", x.c_str());
    if(typeid(x) == typeid(string)) puts("x is string");
    return 0;
}

//type tells yo sign and size of value
// primitives types - integers, floats, boolean
//compounds types serve as containers for types - arrays - flexible and low overhead
//structure - sequential set of objects of various types
//classes are based on structures - structure that defaults to private memberhsip
//union is a set of overlapping objects
//pointers - reference to object of particular type
//references are immutable

//function that retursn a string
