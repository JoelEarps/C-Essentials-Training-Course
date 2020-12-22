// variadic.c by Bill Weinman <http://bw.org/>
// updated for C++EssT 2014-10-24
#include <cstdio>
#include <cstdarg> //has macros and defintions for the variatic functions

// first argument is int count of remaining args
// ... remaining args are doubles for average
double average(const int count, ...) //elipses inidcates take a variable number of arguements, first argument is defined and then test can be any number
{
    va_list ap;
    int i;
    double total = 0.0;
    
    va_start(ap, count);
    for(i = 0; i < count; ++i) {
        total += va_arg(ap, double);
    }
    va_end(ap); //every call for va start must be mapped to a va end
    return total / count;
}

// works like printf, format plus args
int message(const char * fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    int rc = vfprintf(stdout, fmt, ap);
    puts("");
    va_end(ap);
    return rc;
}

int main() {
    message("This is a message");
    message("Average: %lf", average(5, 25.0, 35.7, 50.1, 127.6, 75.0)); //looks like it works like printf, this passes off arguments to other functions
    return 0;
}

//variatic functions
//vf printf could be depricated - standard functions still work for now

