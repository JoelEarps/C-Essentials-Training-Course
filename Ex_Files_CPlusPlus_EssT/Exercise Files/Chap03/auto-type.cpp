// auto-type.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <string>
#include <typeinfo>
using namespace std;

string func() {
    return string("this is a string");
}

int main() {
    auto x = func();
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