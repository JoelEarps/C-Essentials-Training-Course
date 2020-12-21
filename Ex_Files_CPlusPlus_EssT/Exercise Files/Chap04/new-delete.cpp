// new-delete.cpp by Bill Weinman <http://bw.org/>
//   updated 2018-10-27
#include <cstdio>
#include <new>
using namespace std;

constexpr size_t count = 1024; //use for allocating space

int main() {
    printf("allocate space for %lu long int at *ip with new\n", count);
    
    // allocate array
    long int * ip;
    
    //try ctach block using to catch exceptions 
    try {
        ip = new long int [count];
    } catch (std::bad_alloc & ba) {
        fprintf(stderr, "Cannot allocate memory (%s)\n", ba.what());
        return 1;
    }
    
    // initialize array
    for( long int i = 0; i < count; ++i ) {
        ip[i] = i;
    }
    
    // print array
    for( long int i = 0; i < count; ++i ) {
        printf("%ld ", ip[i]);
    }
    puts("");
    
    // deallocate array
    delete [] ip; //if one object don't need square braces, but it has to match new (and amoutn defined after that)
    puts("space at *ip deleted");
    
    return 0;
}
//used to allocate free memory in c++ - speific to c++ and not availble in C
//malloc and free are the ways to do it in C whereas new and free are used to do it in c++
//try catch will see if there is enough memory and cacth that error if it occurs
//if you dont destory the memory after use it will cause a meory leak



