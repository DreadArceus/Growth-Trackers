#include <iostream>
#include <cmath>

using namespace std;

struct vector3D
{
  int i;
  int j;
  int k;
};

int main()
{
  struct vector3D a, b, c;
  cin >> a.i >> a.j >> a.k >> b.i >> b.j >> b.k;
  c.i = (a.j * b.k) - (a.k * b.j);
  c.j = (a.i * b.k) - (a.k * b.i);
  c.k = (a.i * b.j) - (a.j * b.i);
  cout << "Cross Product is " << c.i << "i + " << c.j << "j + " << c.k << "k";
}
