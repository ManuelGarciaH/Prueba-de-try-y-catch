#include <iostream>
#include <string>

using namespace std;

int main()
{
    string cadena;
    int numero;
    cout << "Escriba una cadena de minimo de 6 caracteres" << endl;
    cout << "-> ";
    getline(cin, cadena);
    try{ //Intentando mostrar el sexto caracter de la cadena ingresada
        cout << "El caracter en la posicion 6 es: " << cadena.at(6) << endl;
    }catch(exception& error){
        //Si no puede acceder a ese caracter entonces entra en la excepcion y muestra el error
        cout << error.what() << endl;
    }
    cout << "\nEscriba un numero mayor que 0" << endl;
    cout << "-> ";
    cin >> numero;
    try{ //Intentando comparar si el numero es menor que 0
        if(numero < 0){ //Si es menor que 0 forzamos la excepcion con throw
            throw numero;
        }
    }catch(int numero){ //Se envia menfaje anunciando que es menor que 0
        cout << "El numero es menor que 0" << endl;
    }
    return 0;
}
