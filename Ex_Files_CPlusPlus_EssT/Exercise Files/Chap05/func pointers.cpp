// func.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

void func() {
    puts("this is a function");
}

int main()
{   
    
    void (*pfunc)() = func; //shortcut available 
    puts("this is main");
    pfunc();
    return 0;
}

//function pointer - taking address of a function and point to it

