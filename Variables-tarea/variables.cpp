#include <iostream>

int main()
{
  float a; // Variable float sin inicializar
  bool b = false; // Variable bool inicializada en falso
  sizeof(double); // Variable double
  float d = 1.0e40; // Variable float con valor inicial 1.0e40
  std::cout << "a = " << a << "\n";
  std::cout << "b = " << b << "\n";
  std::cout << "size of double = " << sizeof(double) << "bytes " << "\n";
  std::cout << "d = " << d << "\n";

  // Supongo que, para la variable float con valor inicial 1.0e40,imprime d = inf porque se trata de un valor muy grande.

  return 0;
}
