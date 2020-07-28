#ifndef CALCULATOR_H //checks if symbol is not defined
#define CALCULATOR_H //defines symbol
#include <vector>
using namespace std;
class Complex_Number
{
public:
  Complex_Number();
  Complex_Number(int x, int y);
  Complex_Number(char form, int x, int y);
  double getMod();
  double getArg();
  int distance(Complex_Number c);
private:
  int re;
  int im;
  double mod;
  double arg;
};
class Basic
{
public:
  Basic(int x);
  Basic(vector<int> x);
  int LCM();
  int HCF();
  bool PrimeCheck(int pos);
  void decimalToFraction();
private:
  vector<int> nums;
};
class Quadratic
{
public:
  Quadratic();
  Quadratic(int x, int y, int z);
  Quadratic(int x, int y);
  vector<int> findSolution();
  void findQuadratic();
private:
  int a;
  int b;
  int c;
  double D;
  vector<int> solutions;
};
class Point
{
public:
  Point();
  Point(int x, int y);
  int getX();
  int getY();
private:
  int x;
  int y;
};
class Line
{
public:
  Line(Point a, Point b);
  Line(Point a, double m);
  int slope();
  int length();
  Point intersection(Line l);
private:
  Point a, b;
  double m;
};
class Plane
{

};
class Vector
{
public:
  Vector(int i, int j, int k);
  int getCross(Vector v);
  int getDot(Vector v);
private:
  int i;
  int j;
  int k;
};
class Triangle
{
public:
  Triangle(Point a, Point b, Point c);
  Triangle(int a_len, int b_len, int c_len);
  void getArea();
private:
  Point a, b, c;
  int a_len, b_len, c_len;
};

#endif
