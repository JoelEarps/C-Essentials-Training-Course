// hello-cout.cpp by Bill Weinman <http://bw.org/>
#include <iostream> //instead of cstdio
using namespace std;

int main()
{
    cout << "Hello, World!" << 2*7 << "another string" << endl;
    return 0;
}

//most files on this chpater provide console
//c++ standard output stream is way to send data to the console
//cout is part of the standard c++ library and works differently to puts and printf (c library)
//cout is not used in traditional object orientated way - its used as a class by overloading bitwise shift operator
//cout is larger in size when compiling, c++ is used for systems applications so why would you use it? 

