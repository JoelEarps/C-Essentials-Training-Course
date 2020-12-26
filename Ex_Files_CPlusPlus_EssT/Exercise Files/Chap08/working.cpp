// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main()
{   
    static const char * fn1 = "file1";
    static const char * fn2 = "file2";
    //FILE * fh = fopen(fn1, "w");
    //fclose(fh);
    remove(fn2);
    puts("done");
    return 0;
}

//reading and wirting files, c string, error handling of system errors
//math, localisation and signals
//for c++ header files have no .h files - c versionns have .h
//visual studio has its own version of the c++ standard versions