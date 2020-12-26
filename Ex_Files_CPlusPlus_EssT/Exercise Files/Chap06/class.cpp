// class.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

// a very simple class
class C1 {
    int i = 0;
public:
    void setvalue( int value ) { i = value; }
    int getvalue() { return i; }
};

int main() {
    int i = 47;
    C1 o1; //intialise object from class C1 - variable is o1
    
    o1.setvalue(i);
    printf("value is %d\n", o1.getvalue());
    return 0;
}

//class - the class itself
//object - can use the class to create and object and create an instance of that class
//Datat memmbers - repserent encapsulated or properties
//function methods - functions associated with class
//constructor and destructor - special function at start and end of object

//class defaults to private
//public section - two functions - two methods 
//normally considered best practice to implement person
//int C1::getvalue( int value) {}
