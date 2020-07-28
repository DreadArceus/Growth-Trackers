#include <iostream>
#include "Calculator.h"
//#include "Calculator.cpp"
using namespace std;
int main()
{
  int a = 0, b = 0;
  cin >> a >> b;
  Basic x(a);
  Basic y(b);
  cout << x.PrimeCheck(0) << y.PrimeCheck(0);
}
