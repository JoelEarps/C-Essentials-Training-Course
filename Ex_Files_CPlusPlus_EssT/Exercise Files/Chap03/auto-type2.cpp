// auto-type2.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    vector<int> vi = { 1, 2, 3, 4, 5 };
    for(auto it = vi.begin(); it != vi.end(); ++it) { //how to use a four loop with a vector
        printf("int is %d\n", *it);
    }
    return 0;
}
