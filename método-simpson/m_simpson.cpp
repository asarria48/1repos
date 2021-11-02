#include <iostream>
#include <cmath>
using namespace std;
double f(double x)
{
  double a = cos(exp(x));
  return a;
}
int main(void)
{
  cout.precision(6);
  cout.setf(ios::fixed);
  int n,i;
  double a,b,c,h,sum = 0, integral;
  cout << "\n Ingresa los límites de la integral,\n\n Límite inicial, a =";
  cin >> a;
  cout << "\n Límite final, b =";
  cin >> b ;
  cout << "\n Ingresa número de segmentos (número par),\nn =";
  cin >> n;
  double x[n+1], y[n+1];
  h = (b-a) /n;
  for (i = 0; i < n+1; i++)
    {
      x[i] = a+i*h;
      y[i]=f(x[i]);
    }
  for (i = 1; i < n; i+=2)
    {
      sum = sum + 4.0*y[i];
}
  for (i = 2; i < n-1; i+=2)
    {
      sum = sum + 2.0*y[i];
    }
  integral = h/30*(y[0]+y[n]+sum);
  cout<<"\n La integral es "<<integral<<"\n"<<endl;
  return 0;
}
