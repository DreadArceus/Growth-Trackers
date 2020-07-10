#include <iostream>
#include <cmath>

using namespace std;

struct line2D
{
  double a;
  double b;
  double c;
};

int main()
{
  struct line2D L1, L2;
  cin >> L1.a >> L1.b >> L1.c >> L2.a >> L2.b >> L2.c;
  double x, y;
  x = ((L1.b * L2.c) - (L2.b * L1.c))/((L1.a * L2.b) - (L2.a * L1.b));
  y = ((L2.a * L1.c) - (L1.a * L2.c))/((L1.a * L2.b) - (L2.a * L1.b));
  cout << "Intersection is (" << x << ", " << y << ")";
}
