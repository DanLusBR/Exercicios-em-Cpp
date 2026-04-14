// Media dos pares
// Fazer um programa para ler um vetor de números inteiros e mostrar a média dos números pares, se houverem, ou uma mensagem caso contrário. 

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(){
    int n, somapares = 0, npares = 0;
    double mediapares;

    cout << "Quantos elementos vai ter o vetor?: ";
    cin >> n;

    vector<int> vetor(n);

    for(int i = 0; i < n; i++){
        cout << "Digite um numero: ";
        cin >> vetor[i];
    }

    for(int i = 0; i < n; i++){
        if(vetor[i] % 2 == 0){
            somapares += vetor[i];
            npares++;
        }
    }

    if (npares == 0) {
        cout << "NENHUM NUMERO PAR" << endl;
    }
    else {
        mediapares = (double)somapares / npares;
        cout << fixed << setprecision(1);
        cout << "MEDIA DOS PARES = " << mediapares << endl;
    }

    return 0;
}