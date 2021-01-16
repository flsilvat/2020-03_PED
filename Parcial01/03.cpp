#include <iostream>

using namespace std;

//Resuelva el problema de calcular la suma de todos los dígitos de un número entero
//ejemplo, si se proporciona el número 538, el resultado es 16.
//Elabore un programa recursivo que resuelva el problema: lea el número desde la 
//función main, luego invoque una función recursiva que calcule la suma de los 
//dígitos y retorne el resultado. Despliegue el valor retornado en la función main.


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
    if(n == 0)
        return 0;
    else
        return n%10 + sumar(n/10);
    
}