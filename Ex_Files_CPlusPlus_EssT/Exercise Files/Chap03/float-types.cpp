// float-types.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

// a byte is 8 bits
constexpr size_t byte = 8;

int main() {
    float f; //32 bits
    double df; //64 bits
    long double ldf; //128bits - only 80 bits are used for IEEE std but takes 124 bits
    
    printf("size of float f is %ld bits\n", sizeof(f) * byte);
    printf("size of double float df is %ld bits\n", sizeof(df) * byte);
    printf("size of long double float ldf is %ld bits\n", sizeof(ldf) * byte);

    df = .1 + .1 + .1;
    if (df == 0){
        puts("True");
    }
    else{
        puts("False");
    }
    printf("value of f is : %df\n", df);
    
    return 0;
}
//also use scientifc notation 5e2
//after certain no of digits its no longer accurate - certain amount of scale bur precision is only a number of digits - longer vairable = most precision
