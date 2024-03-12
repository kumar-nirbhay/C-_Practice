#include<iostream>
using namespace std;

class Sum{

public:
  void add(int x, int y)
  {
    int sum = x + y;
    cout << sum << endl;
  }

  void add(int x, int y, int z)
  {
    int sum = x + y + z;
    cout << sum << endl;
  }

  void add(float x, float y)
  {
    float sum = x + y;
    cout << sum << endl;
  }



};

int main(){

    Sum s;
    s.add(3, 5);
    s.add(4, 5, 6);
    s.add(float(4.5), float(5.5));

    return 0;

}