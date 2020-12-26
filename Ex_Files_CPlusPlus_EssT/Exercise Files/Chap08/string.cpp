// string.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    const static size_t maxbuf = 128;
    const char * s1 = "String one";
    const char * s2 = "String two";
    char sd1[maxbuf];
    char sd2[maxbuf];
    int i = 0;
    char c = 0;
    char * cp = nullptr;
    
    // strncpy -- copy a string
    strncpy(sd1, s1, maxbuf); //destination, source and size of buffer available at destination - will copy up to max size -1 (for a terminated character)
    printf("sd1 is %s\n", sd1);
    strncpy(sd2, s2, maxbuf); 
    printf("sd2 is %s\n", sd2);
    
    // strncat -- concatenate string
    strncat(sd1, " - ", maxbuf - strlen(sd1) - 1); //destination of concat, source of concact (whats being added), then size left in place to concat
    strncat(sd1, s2, maxbuf - strlen(sd1) - 1);
    printf("sd1 is %s\n", sd1);
    
    // strnlen -- get length of string
    printf("length of sd1 is %zd\n", strnlen(sd1, maxbuf)); //works on a maximum size - means it won't leak memeory if string does not terminate
    printf("length of sd2 is %zd\n", strnlen(sd2, maxbuf));
    
    // strcmp -- compare strings
    i = strcmp(sd1, sd2);
    printf("sd1 %s sd2 (%d)\n", (i == 0) ? "==" : "!=", i);
    i = strcmp(sd2, s2);
    printf("sd2 %s s2 (%d)\n", (i == 0) ? "==" : "!=", i);
    
    // strchr -- find a char in string
    c = 'n';
    cp = strchr(sd1, c);
    printf("Did we find a '%c' in sd1? %s\n", c, cp ? "yes" : "no");
    if(cp) printf("The first '%c' in sd1 is at position %ld\n", c, cp - sd1); //returns first instance of character
    
    // strstr -- find a string in string
    cp = strstr(sd1, s2);
    printf("Did we find '%s' in sd1? %s\n", s2, cp ? "yes" : "no");
    if(cp) printf("The first '%s' in sd1 is at position %ld\n", s2, cp - sd1);
    
    return 0;
}
