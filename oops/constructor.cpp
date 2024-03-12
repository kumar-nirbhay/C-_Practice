#include<iostream>
using namespace std;

class Rectangle {
public:
int l;
int b;

  Rectangle()
   {   // default const- no argument pass
     l = 0;
     b = 0;
    }

   Rectangle(int x, int y){  // parameterized const- arg passed
        l = x;
        b = y;
   }

   Rectangle(Rectangle& r){  //
        l = r.l;
        b = r.b;
   }

   ~Rectangle(){
    cout << "destructor called" << endl;
   }

};


int main()
{
   Rectangle r1;
   cout<< r1.l << " " << r1.b << endl;

   Rectangle r2(3,4);
   cout << r2.l << " " << r2.b << endl;

   Rectangle r3 = r1;    
   cout << r3.l << " " << r3.b << endl;

   return 0;

}