// Notas
// Leia 2 valores de ponto flutuante de dupla precisão A e B, que correspondem a 2 notas de um aluno. A seguir, calcule a média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (a média deve ser dividida por 11). Imprima o resultado com 5 dígitos após o ponto decimal.

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double nota1, nota2, notafinal;

    cout << "Digite a primeira nota: ";
    cin >> nota1;

    cout << "Digite a segunda nota: ";
    cin >> nota2;

    notafinal = nota1 + nota2;

    cout << fixed << setprecision(1);
    cout << "NOTA FINAL = " << notafinal << endl;

    if (notafinal < 60.0) {
        cout << "REPROVADO" << endl;
    }

	return 0;
}