//  Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions 
//  to calculate the circle's area and circumference.

#include<iostream>
#include<cmath>
using namespace std;


const double PI = 3.14;

class Circle{
     double radius;              // private access specifier


     public:
     Circle (double rad): radius(rad) {}   // constructor

     double calculateArea()                 // member function 
     {
        return PI * pow(radius, 2);
     }

     double calculateCircumference()
     {
        return 2 * PI * radius;
     }

};


int main()
{
    double radius;
    cout << "Enter the radius: " ;
    cin >> radius;
    Circle circle(radius);

    double area = circle.calculateArea();
    cout << "Area " << " = " << area << endl;

    double circumference = circle.calculateCircumference();
    cout << "Circumferene " << " = " << circumference << endl ;
    
}