// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

//conditions - already knew most of this but good to pick up little things you forget

int main()
{
    int x = 42;
    int y = 70;

    if (x > y){
        puts("condition is true");
    }
    else{
        puts("condition is false");
    }

    printf("The greater number is %d\n", x > y ? x : y); // ternary condition, asking if x > y and then comparing the two values after the ?

    int z = 3;


    return 0;
    
}