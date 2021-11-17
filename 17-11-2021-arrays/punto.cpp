// DONE Calcular el producto punto entre dos vectores de dimensión 2.
// DONE Calcular el producto punto entre dos vectores de dimensión 3.
// Para más dimensiones.

#include <iostream>

int main(int argc, char **argv)
{
//double x1 = 9.87, y1 = -0.65, z1 = 7.65432; 
//double x2 = -5.432, y2 = -0.6598876, z2 = -0.64359;
//std::cout << x1*x2 + y1*y2 + z1*z2 << std::endl;


//memoria = stack (estático) + heap (sobrante, dinámico)
//Primitive arrays:
int N = 10; //10 dimensiones, no se puede aumentar más que el stack
double v1[N]{9.87, -0.65, 7.65432}, v2[N]{-5.432, -0.659887, -0.64359}; //Cuántas v1 necesito; inicializo valores; cuando inicializo al menos uno, los demás inicializan en cero
double dot = 0; //las componentes inician en cero
for (int ii = 0; ii < N; ii++) //subíndice, si uso <= me salgo de mis límites, no debo usarlo, me salgo de mi arreglo.
{
dot += v1[ii]*v2[ii];
}
std::cout << dot << std::endl;

    return 0;
}