// Problema "menor_de_tres"
// Fazer um programa para ler três números inteiros. Em seguida, mostrar qual o menor dentre os três números lidos. Em caso de empate, mostrar apenas uma vez.

#include <iostream>

using namespace std;

int main () {

	int a, b, c, menor;

    cout << "Digite um primeiro numero: ";
    cin >> a;
    cout << "Digite um segundo numero: ";
    cin >> b;
    cout << "Digite um terceiro numero: ";
    cin >> c;

    menor = 0;

    if (a < b && a < c) {
        menor = a;
    }
    else if (b < c) {
        menor = b;
    }
    else {
        menor = c;
    }

    cout << "Menor = " << menor << endl;

    return 0;

}