// hello.cpp by Bill Weinman <http://bw.org/>
#include <cstdio> //not a c++ statement, this is a directive to the preprcoessor
//can also use iostream - functions like cout
using namespace std; // shortcut to include namespaces - easier to use std library

int main() //used to be reuqired to have int argc, char **arg
//modern c++ programs dont have anything in ()
{
    //body of function
    puts("Hello, World!"); // puts - pushes string to console
    return 0;
}

//blank spaces ignored c++
//compiler doesnt require this format, easier for programmer
// \n represents a new line
