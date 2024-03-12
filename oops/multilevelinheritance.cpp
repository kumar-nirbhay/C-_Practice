#include<iostream>
using namespace std;

class Parent{                // parent class
    public:
     Parent()               // constructor
     {
        cout << "parent class" << endl;
     }
};

class Child: public Parent{         // inherit parent class (sub class)
   public:
   Child()
   {
    cout << "child class" << endl;
   }

};

class Grandchildren: public Child{             // inherit sub class
   public:
   Grandchildren()
   {
    cout << "grandchild class" << endl;
   }

};



int main()
{
 Grandchildren c;   // obj created and called the grandchildren.

}