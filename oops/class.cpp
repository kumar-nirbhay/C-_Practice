#include<iostream>
using namespace std;

class Fruit{
public:
    string name;
    string color;
};

int main()
{
    Fruit apple;   // declare objects
    apple.name = "Apple";
    apple.color = "red";
    cout << apple.name << " - " << apple.color << endl;

    Fruit * mango = new Fruit();   // created obj using new keyword will get pointer variable of the obj
    mango -> name = "Mango"; // arrow operator
    mango -> color="yellow";
    cout << mango -> name << " - " << mango -> color;

}