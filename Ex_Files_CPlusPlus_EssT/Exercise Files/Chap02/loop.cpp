// loop.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main()
{
    char string[] = "abcdefgh";
    int array[] {1,2,3,4,5};

    // for (int i = 0; string[i]; i++) {
    //     printf(" %c\n", string[i]);
    // }
    for (char c : string){
        if (c ==0) break;
        printf(" c is %c\n", c);
    }
    return 0;
}

//two types of foor loop - one inherited from c and one unique one
// three types of control - first used for initilaising; conditional expression for loop to continue running (while clause); after block of code is executed and before condition met
//range based array happens at compile time
// using range based for loop check for ending 0 for string to not print

