#include <iostream>
#include <fstream>
using namespace std;
int solve(int n)
{
  int x = 0;
  return x;
}
template<class Ti, class To>
void func(Ti &i, To &o, ifstream &c, bool loc)
{
  int t  = 0;
  i >> t;
  while(t--)
  {
    int n = 0;
    i.ignore(3, '\n');
    i >> n;
    int var = solve(n);
    if(loc)
    {
      int ans = 0;
      c >> ans;
      c.ignore(3, '\n');
      cout << "Testing... ";
      if(var != ans)
      {
        cout << "Wrong Answer\n";
        o << "x ";
      }
      else
      {
        cout << "Passed\n";
      }
    }
    o << var << "\n";
  }
}
int main()
{
  ifstream checkFile, inFile("/Users/dreadarceus/github/Codewars/Kata/6-Kyu/Find_the_parity_outlier/input.txt");
  ofstream outFile;
  bool local = false;
  if(inFile.is_open())
  {
    local = true;
    checkFile.open("/Users/dreadarceus/github/.../correctOutput.txt");
    outFile.open("/Users/dreadarceus/github/.../output.txt");
    func(inFile, outFile, checkFile, local);
  }
  else
  {
    func(cin, cout, checkFile,local);
  }
}
