#include <iostream>
#include <fstream>
using namespace std;
int solve(int n)
{
  int x = 0;
  return x;
}
int main()
{
  int t = 0;
  ifstream inFile("/Users/dreadarceus/github/.../input.txt");
  ifstream checkFile("/Users/dreadarceus/github/.../correctOutput.txt");
  ofstream outFile("/Users/dreadarceus/github/.../output.txt");
  outFile << "...\n";
  inFile >> t;
  while(t--)
  {
    int n = 0;
    inFile.ignore(3, '\n');
    inFile >> n;
    int var = solve(n);
    int ans = 0;
    checkFile >> ans;
    checkFile.ignore(3, '\n');
    cout << "Testing... ";
    if(var != ans)
    {
      cout << "Wrong Answer\n";
      outFile << "x ";
    }
    else
    {
      cout << "Passed\n";
    }
    outFile << var << "\n";
  }
}
