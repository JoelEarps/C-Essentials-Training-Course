// hello.cpp by Bill Weinman <http://bw.org/>
#include <cstdio> //not a c++ statement, this is a directive to the preprcoessor
//can also use iostream - functions like cout
using namespace std; // shortcut to include namespaces - easier to use std library

int main() //used to be reuqired to have int argc, char **arg
//modern c++ programs dont have anything in ()
{
    //body of function
    puts("Hello, World!"); // puts - pushes string to console
    int x = 7;
    printf("x is %d\n", x);
    return 0;
   
}

//blank spaces ignored c++
//compiler doesnt require this format, easier for programmer
// \n represents a new line
//expression is anything returns a value, can be part of a statement or an entire statement
//identifiers are made up of words and numbers within a set of constraints
//can't start with numbers or use key/ reserved words
//case senstive 
//indentifiers any length - only first 63 chars are checked for uniqueness
//_ at the start is used for private vairables and __is used for system level stuff

//undefined varaible is a dangerous thing - make sure to assign value when you use it

//const is a qualifier - value of variable cannot be changed once initialised - read only variable

//pointers 
// variable is a typed and named location in memory
