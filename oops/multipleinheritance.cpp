#include<iostream>
using namespace std;

class Parent1{                // parent class
    public:
     Parent1()               // constructor
     {
        cout << "parent class1" << endl;
     }
};

class Parent2{                // parent class
    public:
     Parent2()               // constructor
     {
        cout << "parent class2" << endl;
     }
};

class Child: public Parent1, public Parent2{         // inherit  2 parent class (sub class)
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
  Child c;   // obj created and called the grandchildren.

}