#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double a, b ,c;
  cin >> a >> b >> c;
  double s = (a + b + c)/2;
  double A = sqrt(s*(s-a)*(s-b)*(s-c));

  cout << "Area is " << A;
}
