// file-io.cpp by Bill Weinman <http://bw.org/>
// updated 2018-10-30
#include <cstdio>
using namespace std;

constexpr int maxstring = 1024;    // read buffer size
constexpr int repeat = 5;

int main( int argc, char ** argv ) {
    const char * fn = "testfile.txt";   // file name
    const char * str = "This is a literal c-string.\n";
    
    // create/write the file
    printf("writing file\n");
    FILE * fw = fopen(fn, "w"); //FILE is the unix type for a file handle - from back in the 70s, fopen takes two argumenets - name and file mode
    for(int i = 0; i < repeat; i++) {
        fputs(str, fw); //same as puts for a file
    }
    
    fclose(fw); //closes file
    printf("done.\n");
    
    // read the file
    printf("reading file\n");
    char buf[maxstring]; //buffer to read each line of the file into
    FILE * fr = fopen(fn, "r");
    while(fgets(buf, maxstring, fr)) { //fgets to read into the buffer
        fputs(buf, stdout); //stdout - output stream for the console
    }
    
    fclose(fr);
    remove(fn);
    
    printf("done.\n");
    
    return 0;
}
//c compatible way to read and write file, low overhead and very simple
//