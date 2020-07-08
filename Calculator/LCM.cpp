#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int x, y;
  cin >> x >> y;
  int LCM = 0;
  for(int i = x * y; i >= max(x, y); i--)
  {
    if(i % x == 0 && i % y == 0)
    {
      LCM = i;
    }
  }
  cout << LCM;
}
