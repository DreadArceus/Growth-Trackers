#include <iostream>

using namespace std;

int main()
{
  int x, y;
  cin >> x >> y;
  int HCF = 1;
  for(int i = 2; i <= min(x, y); i++)
  {
    if(x % i == 0 && y % i == 0)
    {
      HCF = i;
    }
  }
  cout << HCF;
}
