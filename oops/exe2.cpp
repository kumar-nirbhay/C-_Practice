//Write a C++ program to create a class called Rectangle that has private member variables for length and width. Implement member functions to calculate the rectangle's area and perimeter.

#include<iostream>
using namespace std;

class  Rectangle{
    private:
    double length;
    double width;

    public:
    Rectangle(double len, double wid): length(len), width(wid){}
    

        double rectangleArea()
        {
           return length * width;
        }

        double rectanglePerimeter()
        {
            return 2 * (length + width);
        }

    };

    int main()
    {
        double length, width;
        cout << "Enter the length: " ;
        cin >> length;

        cout << "Enter the width:" ;
        cin >> width;

        Rectangle rectangle(length, width);

        double area = rectangle.rectangleArea();
        cout << "Area " << " - " << area << endl;

        double perimeter = rectangle.rectanglePerimeter();
        cout << "perimeter " << " - " << perimeter << endl;

        return 0;
    }