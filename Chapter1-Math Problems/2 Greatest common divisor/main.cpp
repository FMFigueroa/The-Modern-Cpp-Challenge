/*
/***************************************\
#2 Greatest common divisor
=========================================

Escriba un programa que, dados dos enteros positivos,
calcule e imprima el máximo común divisor de los dos.

*/

/*
/***************************************\
Solutions:
=========================================
El máximo común divisor (mcd en resumen) de dos o más números enteros distintos de cero,
también conocido como greatest common factor (gcf), highest common factor (hcf), 
greatest common measure (gcm) o máximo común divisor, es el mayor entero positivo 
que los divide a todos.
Hay varias formas de calcular el gcd; un método eficiente es el algoritmo de Euclides.
Para dos enteros, el algoritmo es:
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int gcd = 1;
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    cout << "GCD of " << a << " and " << b << " is " << gcd << endl; 

    getch();
    return 0;
};