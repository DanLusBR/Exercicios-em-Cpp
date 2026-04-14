// Experiencias
// Fazer um programa para ler o número de casos de teste, e para cada caso, ler a quantidade de cobaias utilizadas e o tipo (R, S ou C), calcular e mostrar o total de cobaias, o total de cada tipo de cobaia e a porcentagem de cada tipo em relação ao total.

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n, ratos = 0, sapos = 0, coelhos = 0, qtdcobaias, total;
    char tipo;
    double pratos, psapos, pcoelhos;

    cout << "Quantos casos de teste serao digitados?: ";
    cin >> n;

    for(int i=0; i<n; i++){
        cout << "Quantidade de cobaias: ";
        cin >> qtdcobaias;
        cout << "Tipo de cobaia(R, C, S): ";
        cin >> tipo;

        if(tipo == 'R'){
            ratos = ratos + qtdcobaias;
        }
        else if(tipo == 'S'){
            sapos = sapos + qtdcobaias;
        }
        else{
            coelhos = coelhos + qtdcobaias;
        }
    }

    total = ratos + sapos + coelhos;
    pcoelhos = ((double)coelhos / total) * 100.0;
    pratos = ((double)ratos / total) * 100.0;
    psapos = ((double)sapos / total) * 100.0;

    cout << endl << "RELATORIO FINAL:" << endl;
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << coelhos << endl;
    cout << "Total de ratos: " << ratos << endl;
    cout << "Total de sapos: " << sapos << endl;
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << pcoelhos << endl;
    cout << "Percentual de ratos: " << pratos << endl;
    cout << "Percentual de sapos: " << psapos << endl;

    return 0;
}