// nullptr.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

#ifndef NULL
#define NULL (0LL) /* common C++ definition */
#endif

void f( int i ) {
    printf("the int is %d\n", i);
}

void f( const char * s ) {
    printf("the pointer is %p\n", s);
}

int main() {
    f(nullptr);
    return 0;
}
// null pointer always been problematic in c++
//c++ can overload functions with functions with the same name, will look at value being passed and then use right function
//calling it with null means it doesnt know if it a character or a int
//nullptr is a special value - a pointer of any type