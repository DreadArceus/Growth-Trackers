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
  struct vector3D a, b;
  cin >> a.i >> a.j >> a.k >> b.i >> b.j >> b.k;
  int dot = (a.i * b.i) + (a.j * b.j) + (a.k * b.k);
  cout << "Dot Product is " << dot;
}
