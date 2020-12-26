// constructors.cpp by Bill Weinman <http://bw.org/>
// updated 2018-08-17
#include <cstdio>
#include <string>
using namespace std;

const string unk = "unknown";
const string clone_prefix = "clone-"; //another const prefix called clone-

// -- interface --
class Animal {
    string _type = unk; //three private data members all initlaised to unknown values
    string _name = unk;
    string _sound = unk;
public:
    Animal();   // default constructor
    Animal(const string & type, const string & name, const string & sound);
    Animal(const Animal &); // copy constructor - takes another object of same type
    ~Animal();  // destructor
    void print() const;
};

// -- implementation --
Animal::Animal() {
    puts("default constructor"); //has no arguments - no parameters. This one doesnt do anything but can have default values
}

Animal::Animal(const string & type, const string & name, const string & sound) //takes three strings and initilaise members without executing a body
: _type(type), _name(name), _sound(sound) { //name of a private data memeber - then value passed to it
    puts("constructor with arguments");
}

Animal::Animal(const Animal & a) {
    puts("copy constructor");
    _name = clone_prefix + a._name;
    _type = a._type;
    _sound = a._sound;
}

Animal::~Animal() {
    printf("destructor: %s the %s\n", _name.c_str(), _type.c_str());
}

void Animal::print () const {
    printf("%s the %s says %s\n", _name.c_str(), _type.c_str(), _sound.c_str());
}

int main() {
    Animal a;
    a.print();
    
    const Animal b("goat", "bob", "baah");
    b.print();
    
    const Animal c = b; //copy constructor - b is being used to intialise c and copying data over
    c.print();
    
    puts("end of main");
    return 0;
}
//special member functions that serve a particular person
//destructor is called at the end of main automatically to clear the stack