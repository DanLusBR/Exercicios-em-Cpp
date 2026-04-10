// Problema "soma_impares" (adaptado de URI 1071)
// Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir, calcule e mostre a soma dos números impares entre eles. 

#include <iostream>

using namespace std;

int main () {

int X, Y, troca, soma;

    cout << "Digite dois numeros inteiros: " << endl;
    cin >> X >> Y;

    if (X > Y) {
        troca = X;
        X = Y;
        Y = troca;
    }

    soma = 0;
    for (int i = X+1; i < Y; i++) {
	if (i % 2 != 0) {
	    soma = soma + i;
        }	
    }

    cout << "Soma dos impares = " << soma << endl;

    return 0;

}