// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

struct A //class with three public data members, struct defaults to public members but classes default to private
{
    int ia;
    int ib;
    int ic;
};


int main()
{
    A a = {1,2,3};
    printf("ia is %d, ib is %d, ic is %d", a.ia, a.ib, a.ic);
    return 0;
}

//can create a class by creating a struct
//make a function const safe - giving access to data in a const object