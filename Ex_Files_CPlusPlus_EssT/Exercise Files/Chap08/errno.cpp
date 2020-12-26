// errno.cpp by Bill Weinman <http://bw.org/>
// updated 2018-10-31
#include <cstdio>
#include <cstring>
#include <cerrno>

int main() {
    printf("errno is: %d\n", errno); //0 is no error if != 0 then it will contain the value representing a speific error 
    printf("Erasing file foo.bar\n");
    remove("foo.bar");
    printf("errno is: %d\n", errno);
    perror("Cannot erase file"); //reports error message
    const char * errstr = strerror(errno);
    printf("Tried to erase file and %s", errstr);
    return 0;
}
