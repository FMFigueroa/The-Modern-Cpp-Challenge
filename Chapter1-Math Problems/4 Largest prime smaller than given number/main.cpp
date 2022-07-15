/*
/***************************************\
#3 Least common multiple
=========================================
Escriba un programa que calcule e imprima el mayor número primo que sea menor que un
número proporcionado por el usuario, que debe ser un número entero positivo.

*/

/*
/***************************************\
Solutions:
=========================================
Un número primo es un número que tiene solo dos divisores, el 1 y el número mismo. Para encontrar el primo más grande más pequeño que un número dado, primero debe escribir una función que determine si un número es primo y luego llamar a esta función, comenzando desde el número dado, hacia 1 hasta encontrar el primer primo. Existen varios algoritmos para determinar si un número es primo. Las implementaciones comunes para determinar la primalidad aparecen de la siguiente manera:
*/

#include <iostream>
#include <conio.h>

using namespace std;


bool is_prime(int const num){
    if (num <= 3) { 
        return num > 1; 
    }else if (num % 2 == 0 || num % 3 == 0){ //
        return false;
    }else{
        for (int i = 5; i * i <= num; i += 6){
            if (num % i == 0 || num % (i + 2) == 0){
                return false;
            }
        }
        return true;
    }
}

int main() {
    int limit = 0;
    cout << "Upper limit:";
    cin >> limit;
    for (int i = limit; i > 1; i--){
        if (is_prime(i)){
            cout << "Largest prime:" << i << std::endl;

            getch();
            return 0;
        }
    }
}