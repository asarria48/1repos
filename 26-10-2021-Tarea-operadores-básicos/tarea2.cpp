#include <iostream>

int main(void)
{
  
  long int a = 0;
  // const long int MMAX = 600851475147;
  long int n = 600851475147;

  for(a = n-1; a < n; --a)
  
  {
    if (n%a == 0)
      {
    std::cout << a << "\n";
    break;
      }
  }
  return 0;
}
