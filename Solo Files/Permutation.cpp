#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> a(3);
  cin >> a[0] >> a[1] >> a[2];
  for(int x = 0; x < a.size(); x++)
  {
    for(int i = 0; i < a.size(); i++)
    {
      cout << a[i] << " ";
    }
    cout << "\n";
    swap(a[1], a[2]);
    for(int j = 0; j < a.size(); j++)
    {
      cout << a[j] << " ";
    }
    cout << "\n";
    swap(a[0],a[1]);
  }
  return 0;
}
