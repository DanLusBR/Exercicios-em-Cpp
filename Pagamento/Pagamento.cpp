// Pagamento
// Leia o nome de um funcionário, seu valor por hora e a quantidade de horas trabalhadas. Em seguida, mostre o valor do pagamento do funcionário com uma mensagem explicativa.

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string nome;
    double valor, pagamento;
    int horas;

    cout << "Nome: ";
    getline(cin, nome);

    cout << "Valor por hora: ";
    cin >> valor;

    cout << "Horas trabalhadas: ";
    cin >> horas;

    pagamento = valor * horas;

    cout << fixed << setprecision(2);
    cout << "O pagamento para " << nome << " deve ser R$ " << pagamento << endl;

    return 0;
}