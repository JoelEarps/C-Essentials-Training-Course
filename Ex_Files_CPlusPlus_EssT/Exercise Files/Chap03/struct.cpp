// struct.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

struct Employee {
    int id;
    const char * name;
    const char * role;
};

int main() {
    Employee joe = { 42, "Joe", "Boss" }; //initialiser list
    
    printf("%s is the %s and has id %d\n",
           joe.name, joe.role, joe.id);
    
    return 0;
}

//variables inside a struct is called a data member
//basis of classes and objects