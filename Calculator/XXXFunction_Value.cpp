#include <iostream>
#include <cmath>

using namespace std;

int returner(int x);

int main()
{
  int x;
  cin >> x;
  int y = returner(x);
  cout << y;
}

int returner(int x)
{
  return pow(x,2); //This has to wait until i know more languages
}
