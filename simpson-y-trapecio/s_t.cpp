#include <iostream>
#include <cmath>

using namespace std;

float fx (float x);
float fx2 (float x2);
float fx3 (float x3);
float fx4 (float x4);
float ancho (float a, float b, int n);
void menu(int &funcion,int &metodo, int &n);

const float pi = 3.1416;

float fx (float x)
{
  float f;
  
  f = 2 * pi * tan(x) * sqrt ( 1 + pow ( (1 / cos(x)), 4) );

  return f;
}

float fx2 (float x2)
{
  float f2;

  f2 = 2 * pi * (pow (x2, 3)) / 9 * sqrt (1 + (pow (x2, 4)/9));

  return f2;
}
float fx3 (float x3)
{
float f3;

 f3 = cos(exp(x3));

 return f3;
}

float fx4 (float x)
{
  float f4;

  f4 = 1 / exp(x);

  return f4;
}
float ancho (float a, float b, int n)
{
  float h;

  h = (b-a)/n;
  cout << "\nh = " << h << endl;

  return h;
}

void menu(int &funcion,int &metodo, int &n)
{
  cout << "\n Resolver integrales definidas"
       << "\n===================================="
       << "\n1.- 2 * pi * tan(x) * sqrt ( 1 + pow ( (1 / cos(x)), 4) )"
       << "\n2.- 2 * pi * x^3 /9 *sqrt (1 + (x)^4 / 9) "
       << "\n3.- cos(e^x)"
       << "\n4.- e^-(x)^2\n"
       << "\n===================================="
       << "\nIntegral (1-4):";

  cin >> funcion;

  cout << "\n Método para realizar la integral"
       << "\n===================================="
       << "\n1.- Método de Simpson"
       << "\n2.- Método de trapecio"
       << "\n===================================="
       << "\nMétodo (1-2):";

  cin >> metodo;

  cout << "\Ingrese el número de particiones: ";
  cin >> n;

}
    int main (void)
    {
      int funcion, metodo, n;
      double sum, lInf, lSup, vInt, h;

      menu (funcion, metodo, n);

      switch (funcion){

	case 1:

	lInf = 0;
	lSup = pi/4;
	h = ancho (lInf, lSup, n);
	sum = fx(lInf);
	for(int i = 1; i <= n -1; i++)
	  sum = sum + 2 * fx(h*i);

	sum = sum + fx(lSup);

	vInt = h * sum / 2;

	cout << "\nEl resultado de la integral es: ";
	cout << "\n = " << vInt << endl;

	break;

	case 2:

	  lInf = 2;
	  lSup = 0;
	  h = ancho (lInf, lSup, n);
	  sum = fx2(lInf);
	  for(int i = 1; i <= n -1; i++)
	    sum = sum + 2 * fx2(h*i);

	  sum = sum + fx2(lSup);
	  vInt = h * sum / 2;

	  cout << "\nEL resultado de la integral es: ";
	  cout << "\nI = " << vInt << endl;

	  break;

	  case 3:

	  lInf = 0;
	  lSup = 0.5;
	  h = ancho (lInf, lSup, n);
	  sum = fx3(lInf);
	  for(int i = 1; i <= n -1; i++)
	    sum = sum + 2 * fx3(h*i);

	  sum = sum + fx3(lSup);
	  vInt = h * sum / 2;

	  cout << "\nEL resultado de la integral es: ";
	  cout << "\nI = " << vInt << endl;

	  break;

	  case 4:

	  lInf = pi/2;
	  lSup = 0;
	  h = ancho (lInf, lSup, n);
	  sum = fx4(lInf);
	  for(int i = 1; i <= n -1; i++)
	    sum = sum + 2 * fx4(h*i);

	  sum = sum + fx4(lSup);
	  vInt = h * sum / 2;

	  cout << "\nEL resultado de la integral es: ";
	  cout << "\nI = " << vInt << endl;

	  break;	    
      }
      return 0;
}

