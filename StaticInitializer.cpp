#include <iostream>
using namespace std;
// Version 1
class HasStatic {
    static int x, y;
    public:
    void print() {

        cout<<"HasStatic::x"<<x<<endl;
        cout<<"HasStatic::y"<<y<<endl;

    }
       
};

int HasStatic::x = 1;
int HasStatic::y = x+1;

void main() {

    HasStatic HS;
    HS.print();
    
} 