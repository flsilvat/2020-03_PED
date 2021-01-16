#include <iostream>
#include <fstream>

using namespace std;

//Elabore un programa que lea n números desde teclado y calcula la suma y el promedio
//de los mismos. Luego cree un archivo de texto en el que colocará, en la primera 
//fila, la sima, ye en la segunda fila el promedio. No utilice arreglos en la 
//solución de este problema.

int main(void){
    cout << endl << endl;

    int n;
    cout << "Cantidad de numeros a ingresar?: ";
    cin >> n;

    int index = n;
    float x, sum = 0, promedio = 0;
    while(index > 0){
        cout << "Ingrese un numero: ";
        cin >> x;
        sum += x;
        index--;
    }
    promedio = sum/n;

    cout << endl << "Suma: " << sum << endl;
    cout << "Promedio: " << promedio << endl;

    ofstream file("archivo.txt");
    file << "Suma: " << sum << '\n';
    file << "Promedio: " << promedio << '\n';
    file.close();

    cout << endl;
    return 0;
}