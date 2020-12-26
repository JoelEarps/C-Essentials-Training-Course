// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main()
{   
    const int bufsize = 256;
    static char buf[bufsize];
    fputs("prompt:", stdout);
    fflush(stdout); //flushing the buffer - all of stream io is buffered - flushing bufferes and eensures whatever is sent is written
    fgets(buf, bufsize, stdin); //takes a buffer and a buffer size
    fputs(buf, stdout);
    return 0;
}

//puts has a new line character at the end whereas fputs doesnt and you need to specify where the output is going
//another version of gets that does not have f and only works from the console - recommeneded that you nver use it! it will continue to store thing sbeyond th eend fo the buffer
//it has been used to break computers and security
