#include <iostream>
#include <cmath>

using namespace std;

struct twoDPoint
{
  double x;
  double y;
};

int main()
{
  struct twoDPoint A, B, C;
  cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y;
  double area = (A.x * (B.y - C.y) + B.x * (C.y - A.y) + C.x * (A.y - B.y))/2;
  cout << "Area is " << area;
}
