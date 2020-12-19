// qualifiers.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

class S {
public:
    int static_value() {
        static int x = 7;
        return ++x;
    }
};

int func() {
    int x = 7; //change this to static and it wont get reinitilaised everytime you called func
    return ++x;
}

int main() {
    int i = 42;
    printf("The integer is %d\n", i);
    return 0;
}
//cv (constant and volitle) qualifiers and storage duration (duration or lifetime of variable) qualifiers
//const static - immutable and static storage duration
//static variables live for duration of program - keeping state between given variables and functions
//extern variables are decribed outside main unit and linked to code

