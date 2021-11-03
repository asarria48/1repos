#include <iostream>
#include <cmath>

double fun(double x);
double fderiv(double x, double h);

int main (int argc, char **argv)
{
  std::cout.precision(15); std::cout.setf(std::ios::scientific);
  const double X = 2.7;
  const double H = 0.1e-7;
  std::cout << X << "\t" << H << "t"
	    << fderiv(X, H) <<  "\t"
	    << std::cos(X) << "\n";
  return 0;
}

double fun(double x)
{

  return std::sin(x);
}

double fderiv(double x, double h)
{
  return (fun(x+h) - fun(x))/h;
}
