// Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.

#include<iostream>
using namespace std;

class Person
{
    private:
    string name;
    int age;
    string country;

   public:

   void setName(const string & n)
   {
     name = n;
   }

   void setAge(int a)
   {
     age = a;
   }

   void setCountry(const string & c)
   {
     country = c;
   }

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    string getCountry()
    {
        return country;
    }

};

int main()
{
    Person person;
    person.setName("Nirbhay");
    person.setAge(21);
    person.setCountry("India");

    cout << "Name: " <<  person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;
    cout << "Country: " << person.getCountry() << endl;

    return 0;

}