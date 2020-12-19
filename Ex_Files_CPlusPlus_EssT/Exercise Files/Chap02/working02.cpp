#include <cstdio>
using namespace std;

int main()
{
    char s[] = "String";
    printf("String is: %s\n", s);

    for(int i; s[i]!=0;i++){ //scroll through with indexes or scroll through with pointers
       printf("char is: %c\n", s[i]);
    }
    
    for(char * cp = s; *cp ;++cp){
       printf("char set 1 is: %c\n", *cp); //can scroll through with pointers 
    }

    for(char c : s){
        if (c == 0) break;
          printf("char set 2 is: %c\n", c);
    }

    return 0;
    
}

//String is a primitive array terminated with a 0, can be called a 0 terminated string