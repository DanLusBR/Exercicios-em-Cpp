// Problema "alturas"
// Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos, bem como os nomes
// dessas pessoas caso houver.

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n, nmenores = 0;
    double alturatotal = 0;

    cout << "Quantas pessoas serao digitadas?: ";
    cin >> n;

    string nomes[99];
    int idades[99];
    double alturas[99];

    for (int i = 0; i < n; i++) {
        cout << "Dados da " << i + 1 << "a pessoa:" << endl;
        cout << "Nome: ";
        cin.ignore();
        getline(cin, nomes[i]);
        cout << "Idade: ";
        cin >> idades[i];
        cout << "Altura: ";
        cin >> alturas[i];

        alturatotal += alturas[i];
        if (idades[i] < 16) {
            nmenores++;
        }
    }

    double alturamedia = alturatotal / n;
    double percentualMenores = ((double)nmenores / n) * 100.0;

    cout << fixed << setprecision(2);
    cout << endl << "Altura media: " << alturamedia << endl;
    
    cout << fixed << setprecision(1);
    cout << "Pessoas com menos de 16 anos: " << percentualMenores << "%" << endl;

    for (int i = 0; i < n; i++) {
        if (idades[i] < 16) {
            cout << nomes[i] << endl;
        }
    }

    return 0;
    
}