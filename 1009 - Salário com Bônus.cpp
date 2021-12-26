#include <iostream>
 
using namespace std;
 
int main() {
 
    double salario = 0, vendas = 0, areceber = 0;
    char nome [10];
    
    cin >> nome;
    cin >> salario;
    cin >> vendas;
    
    areceber = (vendas * 15) / 100;
    areceber = salario + areceber;

    cout.precision (2);
    cout << fixed << "TOTAL = R$ " << areceber << endl;
 
    return 0;
}