#include<iostream>
using namespace std;

class Car{
    public:
    string brand;
    string color;
    string model;
    int year;
};


int main()
{
    Car c1;
    c1.brand = "BMW";
    c1.color = "Red";
    c1.model = "x5";
    c1.year = 1995;

    Car c2;
    c2.brand = "Ford";
    c2.color = "black";
    c2.model = "j3";
    c2.year = 2000;

    Car *c3 = new Car();   // obj creation using new keyword.
    c3->brand = "Ford";
    c3->color = "yellow";
    c3->model = "f5";
    c3->year = 2020;

    cout << c1.brand << " "<< c1.color <<" "<< c1.model <<" " << c1.year << endl;
    cout << c2.brand<< " "<<c2.color<< " "<<c2.model<<" "<<c2.year<<endl;
    cout << c3->brand<< " "<<c3->color<< " "<<c3->model<<" "<<c3->year<<endl;
    return 0;

}