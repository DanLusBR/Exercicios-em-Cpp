// Problema "troco" 
// Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia. O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,  e o valor em 
// dinheiro dado pelo cliente (suponha que haja dinheiro suficiente). Seu programa deve mostrar o valor do troco a ser devolvido ao cliente. 

    #include <iostream>
    #include <iomanip>

    using namespace std;

    int main () {

    int quantidade;
    double preco, valor_dado, troco, total;

    cout << "Qual o preco unitario do produto?: " << endl;
    cin >> preco;
    cout << "Qual a quantidade do produto comprada?: " << endl;
    cin >> quantidade;
    cout << "Quanto de dinheiro foi dado?: " << endl;
    cin >> valor_dado;

    total = preco * quantidade;
    troco = valor_dado - total;

    if (total > valor_dado) {
        cout << "Valor insuficiente"; 
    }
    else {cout << "O troco foi de = " << fixed << setprecision(2) << troco << endl;
    }

    return 0;
        
    }