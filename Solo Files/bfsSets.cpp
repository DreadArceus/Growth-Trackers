#include <iostream>
#include <set>
using namespace std;
int solve(int a, int b)
{
    int ans = 0;
    set<double> current, old;
    current.insert(a);
    while(current.find(b) == current.end())
    {
        ans++;
        old = current;
        current.clear();
        for(auto it : old)
        {
            current.insert(it/10);
            current.insert(it*10);
            current.insert(it+1);
            current.insert(it-1);
        }
    }
    return ans;
}
int main()
{
    int a = 0, b = 0;
    cin >> a >> b;
    int ans = solve(a, b);
    cout << ans;
}