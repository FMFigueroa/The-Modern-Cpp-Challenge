/*
/***************************************\
#1 Sum of naturals divisible by 3 and 5
=========================================

Escriba un programa que calcule e imprima
la suma de todos los números naturales divisibles
por 3 o 5, hasta un límite dado ingresado por el usuario

*/

/*
/***************************************\
Solutions:
=========================================
La solución a este problema es iterar a través de 
todos los números desde 3...
(1 y 2 no son divisibles por 3,por lo que no tiene sentido probarlos) 
...hasta el límite ingresado por el usuario.
Usa la operación módulo para comprobar que el resto de la división de un número
por 3 y 5 es 0.
Sin embargo, el truco para poder sumar hasta un límite mayor es usar long long 
y no int o long para la suma, lo que resultaría en un desbordamiento antes de 
sumar 100,000:
*/



#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
    unsigned int limit = 0;
    cout << "Upper limit:";
    cin >> limit;
    unsigned long long sum = 0;
    for (unsigned int i = 3; i < limit; ++i)
    {
        if (i % 3 == 0 || i % 5 == 0)
        sum += i;
    }
    cout << "sum=" << sum << endl;

    getch();
    return 0;
};