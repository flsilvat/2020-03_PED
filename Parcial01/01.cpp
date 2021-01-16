#include <iostream>
#include <string>

using namespace std;

//Elabore un programa que lea una cadena desde teclado, invierta su contenido 
//y muestre el resultado en pantalla.

int main(void){
    cout << endl << endl;

    string cadena ="";
    string cadenaInvertida = "";

    cout << "Ingrese una cadena de texto: " << endl;
    getline(cin, cadena, '\n');;

    cout << endl << "Cadena: " << endl;
    cout << cadena << endl << endl;
    
    for (int i = cadena.length(); i >=0 ; i--){
        cadenaInvertida += cadena[i];
    }

    cout << "Cadena Invertida: " << endl;
    cout << cadenaInvertida;

    cout << endl;
    return 0;
}
