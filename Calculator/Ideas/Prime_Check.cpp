#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x;
    cin >> x;
    bool isPrime = true;
    vector<int> primes(2);
    primes[0] = 2;
    primes[1] = 3;
    for(int i = 2; i < x; i++)
    {
      for(int j = 0; j < primes.size(); j++)
      {
        if(i % primes[j] == 0)
        {
          isPrime = false;
          break;
        }
      }
      if(isPrime)
      {
        primes.push_back(i);
      }
      isPrime = true;
    }
    for(int i : primes)
    {
      if(x % i == 0)
      {
        cout << "Not a prime";
        return 0;
      }
    }
    cout << "It is a prime";
}
