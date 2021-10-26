#include <iostream>

int main(void)
{
  int suma = 0;
  int m = 0;
  const int MMAX = 1000;
  
  for(m = 1; m < MMAX; m = m+1) {
  if ((m%3 == 0) || (m%5 == 0)) {
    //suma = suma  + m;
    suma +=  m;
    }
  }
  
  std::cout << suma << "\n";
  
  return 0;
}
