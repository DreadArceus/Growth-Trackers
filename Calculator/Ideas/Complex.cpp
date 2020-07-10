#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

struct complex
{
  double re;
  double im;
};

int main()
{
  struct complex z;
  cin >> z.re;
  cin >> z.im;

  double mod = sqrt(pow(z.re, 2) + pow(z.im, 2));
  double arg = M_PI / atan(abs(z.im) / abs(z.re));

  cout << "The modulus of this complex number is " << mod << "\n";
  cout << "The argument of this complex number is pie/" << arg;
}
