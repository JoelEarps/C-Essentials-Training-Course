// vector.cpp by Bill Weinman <http://bw.org/>
// updated 2018-10-31
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//vector template class is defined in the template header


int main() {
    cout << "Vector from initializer list: " << endl;
    vector<int> vi1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    
    cout << "size: " << vi1.size() << endl; //size
    cout << "front: " << vi1.front() << endl; //front element
    cout << "back: " << vi1.back() << endl; //back element
    
    // iterator
    cout << endl << "Iterator:" << endl;
    vector<int>::iterator itbegin = vi1.begin();
    vector<int>::iterator itend = vi1.end();
    for (auto it = itbegin; it < itend; ++it) {
        cout << *it << ' ';
    }
    cout << endl;
    
    cout << endl << "Index:" << endl;
    cout << "element at 5: " << vi1[5] << endl; //index vector just like array
    cout << "element at 5: " << vi1.at(5) << endl; //or you can use the at function
    
    cout << endl << "Range-based for loop:" << endl;
    for (int & i : vi1) {
        cout << i << ' '; //range based for loop
    }
    cout << endl;
    
    cout << endl << "Insert 42 at begin + 5: " << endl; //insert elements, erase elements and add values onto the back
    vi1.insert(vi1.begin() + 5, 42);
    cout << "size: " << vi1.size() << endl;
    cout << "vi1[5]: " << vi1[5] << endl;
    
    cout << "Erase at begin + 5: " << endl;
    vi1.erase(vi1.begin() + 5);
    cout << "size: " << vi1.size() << endl;
    cout << "vi1[5]: " << vi1[5] << endl;
    
    cout << "push_back 47: " << endl;
    vi1.push_back(47);
    cout << "size: " << vi1.size() << endl;
    cout << "vi1.back() " << vi1.back() << endl;
    
    cout << "Range-based for loop: " << endl;
    for(int & v : vi1) {
        cout << v << ' ';
    }
    cout << endl << endl;
    
    // from C-array
    const static size_t size = 10;
    int ia[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    cout << endl << "Vector from C-array: " << endl;
    vector<int> vi2(ia, ia + size);
    for( int & i : vi2 ) {
        cout << i << ' ';
    }
    cout << endl << endl;
    
    // vector of strings
    cout << "Vector of strings:" << endl;
    vector<string> vs = { "one", "two", "three", "four", "five" };
    for(string & v : vs) {
        cout << v << endl;
    }
    
    return 0;
}
//fundamental conatiner type - look at advantages of using this over an array