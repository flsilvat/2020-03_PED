#include <iostream>

using namespace std;

//Resuelva el problema de calcular la suma de todos los dígitos de un número entero
//ejemplo, si se proporciona el número 538, el resultado es 16.
//Elabore un programa iterativo que resuelva el problema: lea el número desde la 
//función main, luego invoque una función que calcule la suma de los dígitos de 
//forma iterativa y retorne el resultado. Despliegue el valor retornado en la 
//función main.

int sumar(int);

int main(void){
    cout << endl << endl;
    
    int n;
    cout << "Ingrese un entero: ";
    cin >> n;

    cout << endl << "La suma de los digitos es: " << sumar(n) << endl;

    cout << endl;
    return 0;
}

int sumar(int n){
    int suma=0;
    while(n>0){
        suma = suma + n%10;
        n /= 10;
    }
    return suma;
}