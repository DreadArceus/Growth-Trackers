#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int a, b, c; //ax^2 + bx + c = 0
  cin >> a >> b >> c;
  int x1, x2, D;
  D = pow(b, 2) - 4 * a * c;
  if(D >= 0)
  {
    x1 = (- b + D)/(2 * a);
    x2 = (- b - D)/(2 * a);
    cout << "Solutions are: " << x1 << " and " << x2 << "\n";
  }
  else
  {
    cout << "Woops";
  }
}
