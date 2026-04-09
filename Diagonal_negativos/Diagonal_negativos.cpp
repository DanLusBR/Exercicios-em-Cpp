// Problema "diagonal_negativos"
// Fazer um programa para ler um número inteiro N (máximo = 10) e uma matriz quadrada de ordem N contendo números inteiros. Em seguida, mostrar a diagonal principal e a quantidade de valores negativos da matriz. 

#include <iostream>

using namespace std;

int main() {

    int n, qtdnegativos;

    cout << "Qual a ordem da matriz?: ";
    cin >> n;

    int matriz[99][99];

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "DIAGONAL PRINCIPAL:\n";

    for (int i=0; i<n; i++) {
        cout << matriz[i][i] << " ";
    }

    qtdnegativos = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (matriz[i][j] < 0) {
                qtdnegativos++;
            }
        }
    }

    cout << "\n\nQUANTIDADE DE NEGATIVOS = " << qtdnegativos << endl;

    return 0;
}