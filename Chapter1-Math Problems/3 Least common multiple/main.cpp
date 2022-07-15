/*
/***************************************\
#3 Least common multiple
=========================================

Escriba un programa que, dados dos o más enteros positivos,
calcule e imprima el menor múltiplo común de todos ellos.

*/

/*
/***************************************\
Solutions:
=========================================
El mínimo común múltiplo (mcm) de dos o más números enteros distintos de cero, también conocido como mínimo común múltiplo o mínimo común múltiplo, es el número entero positivo más pequeño que es divisible por todos ellos. Una forma posible de calcular el mínimo común múltiplo es reducir el problema a calcular el máximo común divisor. En este caso se utiliza la siguiente fórmula:
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int mcm = 0;
    int i = 0;
    
    if (a > b) {
        i = a;
    }else{
        i = b;
    }

    for ( i; i > 1 ; i--){
        if (a % i == 0 || b % i == 0) {
            mcm = i;
        }  
    }
    cout << "MCM of " << a << " and " << b << " is " << mcm << endl; 

    getch();
    return 0;
};