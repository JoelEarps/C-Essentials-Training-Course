// typeid.cpp by Bill Weinman <http://bw.org/>
// version of 2018-10-28
#include <cstdio>
#include <typeinfo> //need to keep this
#include <string>
using namespace std;

struct A { int x; };
struct B { int x; };

A a1;
B b1;

int main() {
    printf("type of %s\n", typeid(string).name());
    if(typeid(a1) == typeid(A)) {
        puts("same");
    } else {
        puts("different");
    }
    return 0;
}
//returns a type info object which is contained from type info header
