// exception.cpp by Bill Weinman <http://bw.org/>
// updated 2018-10-31
#include <iostream>
#include <exception>
using namespace std;
//provide description of exception being thrown

class E : public exception {
    const char * msg;
    E();
public:
    E(const char * s) throw() : msg(s) {}
    const char * what() const throw() { return msg; }
};

void broken() {
    cout << "this is a broken function" << endl;
    throw E("ouch");
}

int main() {
    cout << "let's have an emergency!" << endl;
    try{
        broken();
    } catch (E & e) {
        cout << e.what() << endl;
    }
    
    return 0;
}
