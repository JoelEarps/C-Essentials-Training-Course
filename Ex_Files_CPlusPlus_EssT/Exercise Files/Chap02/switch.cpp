// switch.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main() {
    const int iONE = 1;
    const int iTWO = 2;
    const int iTHREE = 3;
    const int iFOUR = 4;
    
    int x = 3;
    
    switch(x) {
        case iONE:
            puts("one");
            break;
        case iTWO:
            puts("two");
            break;
        case iTHREE:
            puts("three");
            break;
        case iFOUR:
            puts("four");
            break;
        default:
            puts("default");
            break;
    }
}

//switch statement chooses the case for the excution - it tests the value that is past to it against the case statements
//it then branches execution to the matching statements, without breaks it would jusy continue down from the point of x i.e if x is 3 it would do 3 and 4
//default is optional - if no case statement exists - otherwise would just break out and continue from after
