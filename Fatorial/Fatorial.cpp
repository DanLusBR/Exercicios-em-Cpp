// Fatorial
// Leia um valor inteiro N (0 < N < 13) e calcule o fatorial de N.

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n, fatorial;

    cout << "Digite o valor de N: ";
    cin >> n;

    fatorial = 1;
    for(int i=n; i>0; i--){
        fatorial = fatorial * i;
    }

    cout << "FATORIAL = " << fatorial << endl;

    return 0;
}