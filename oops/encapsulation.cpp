#include<iostream>
using namespace std;

class ABC{
    int x; // here x is private so we cant use it in diff class so for that we need to write the functions like get set and with the    help of these we can make use of x in diff class.

    public:

    void set(int n){
        x = n;
    }

    int get(){
        return x;
    }
};

int main()
{

    ABC obj1;
    obj1.set(3);
    cout << obj1.get() << endl;
}