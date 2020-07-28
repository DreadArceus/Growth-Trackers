#include "Calculator.h"
#include <iostream>
#include <cmath>
using namespace std;

int disFormula(int x1, int x2, int y1, int y2)
{
  return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

Complex_Number::Complex_Number()
{
  re = 0;
  im = 0;
  mod = 0;
  arg = 0;
}
Complex_Number::Complex_Number(int x, int y)
{
  re = x;
  im = y;
  mod = sqrt(pow(re, 2) + pow(im, 2));
  arg = atan(double(im/re));
}
Complex_Number::Complex_Number(char form, int x, int y)
{
  re = 0;
  im = 0;
  mod = x;
  arg = y;
}
double Complex_Number::getMod()
{
  return mod;
}
double Complex_Number::getArg()
{
  return arg;
}
int Complex_Number::distance(Complex_Number c)
{
  return disFormula(c.re, this->re, c.im, this->im);
}

Basic::Basic(int x)
{
  this->nums.push_back(x);
}
Basic::Basic(vector<int> x)
{
  nums = x;
}
int Basic::LCM()
{

}
int Basic::HCF()
{

}
bool Basic::PrimeCheck(int pos)
{
  for(int i = 2; i < nums[pos]; i++)
  {
    if(nums[pos] % i == 0)
    {
      return false;
    }
  }
  return true;
}
void Basic::decimalToFraction()
{

}

Quadratic::Quadratic()
{
  a = 0;
  b = 0;
  c = 0;
  D = 0;
}
Quadratic::Quadratic(int x, int y, int z)
{
  a = x;
  b = y;
  c = z;
  D = pow(b, 2) - 4 * a * c;
  solutions.push_back((-b - sqrt(D)) / 2 * a);
  solutions.push_back((-b + sqrt(D)) / 2 * a);
}
Quadratic::Quadratic(int x, int y)
{
  a = 1;
  b = -x;
  c = y;
}
vector<int> Quadratic::findSolution()
{
  return solutions;
}
void Quadratic::findQuadratic()
{
  cout << a << "x^2 + " << b << "x + " << c << "\n";
}

Point::Point()
{
  x = 0;
  y = 0;
}
Point::Point(int x, int y)
{
  this->x = x;
  this->y = y;
}
int Point::getX()
{
  return x;
}
int Point::getY()
{
  return y;
}


Line::Line(Point a, Point b)
{
  this->a = a;
  this->b = b;
  m = (a.getY() - b.getY()) / (a.getX() - b.getY());
}
Line::Line(Point a, double m)
{
  this->a = a;
  this->m = m;
}
int Line::slope()
{
  return m;
}
int Line::length()
{
  return disFormula(a.getX(), b.getX(), a.getY(), b.getY());
}
Point Line::intersection(Line l)
{

}

Vector::Vector(int i, int j, int k)
{
  this->i = i;
  this->j = j;
  this->k = k;
}
int Vector::getCross(Vector v)
{

}
int Vector::getDot(Vector v)
{

}

Triangle::Triangle(Point a, Point b, Point c)
{

}
Triangle::Triangle(int a_len, int b_len, int c_len)
{

}
void Triangle::getArea()
{

}
