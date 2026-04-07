// Problema "crescente" (adaptado de URI 1113)
// Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente. O programa deve finalizar
// quando forem digitados dois valores iguais.

#include <iostream>

using namespace std;

int main () {

	int X, Y;

	cout << "Digite outro dois numeros: " << endl;
	cin >> X >> Y;

    while (X != Y) {
	    if (X < Y) {
	    cout << "Crescente!" << endl;
	    }
	    else if (X > Y) {
	    cout << "Decrescente!" << endl;
	    }

        cout << "Digite outro dois numeros: " << endl;
	    cin >> X >> Y;
	}	

    return 0;

}