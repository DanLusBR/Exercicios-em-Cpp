// Problema "terreno"  
// Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma  casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida,  o programa deve
// mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com duas casas decimais, conforme exemplo. 

#include <iostream>
#include <iomanip>

using namespace std;

int main () {

double largura, comprimento, valor_m2, valor_area, valor_terreno;

cout << "Digite a largura do terreno: " << endl;
cin >> largura;
cout << "Digite o comprimento do terreno: " << endl;
cin >> comprimento;
cout << "Digite o valor do m2 do terreno: " << endl;
cin >> valor_m2;

valor_area = largura * comprimento;
valor_terreno = valor_m2 * valor_area;

cout << "Area do terreno = " << fixed << setprecision(2) << valor_area << endl;
cout << "Preco do terreno = " << fixed << setprecision(2) << valor_terreno << endl;

return 0 ;

}