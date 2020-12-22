// func.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int func(int i) //returns no value, can change the function call by calling by reference, use const it so don't change variable
{   
    
    return i*2;
}

int main()
{   
    int i =42;
    puts("this is main()");
    func(i);
    printf("the value is %d\n", i); //function call operator is the paranthesis, token is the name of the function
    return 0;
}

//function must be declared before its called

//can declare function later by telling the compiler its a forward function operator

//values are passed through passing
//data is passed to a function and pass data on to the stack. Passing large objects might want to use a pointer and a reference so no memory problems
//variables declared in a function defaults to automatic storage, stored on the stack and is temporary
//using static will keep the variable around
//return statement will call value back to caller using return statement
//same applies to return about passing values - large, do so with a reference