#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    cin >> x;
    cout << (int)x << " " << x << "\n";
    int i = 0;
    while(x != (int)x)
    {
      x *= 10;
      i++;
      cout << (int)x << " " << x << "\n";
    }
    i = pow(10, i);
    while(0 == 0)
    {
      if(int(x) % 2 == 0 && i % 2 == 0)
      {
        x /= 2;
        i /= 2;
      }
      else if(int(x) % 5 == 0 && i % 5 == 0)
      {
        x /= 5;
        i /= 5;
      }
      else
      {
        break;
      }
    }
    cout << x << "/" << i;
}
