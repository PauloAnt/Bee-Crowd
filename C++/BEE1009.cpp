#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
    string nome;
    double salario_fixo, vendas;

    cin >> nome >> salario_fixo >> vendas;

    double total = salario_fixo + (vendas * 0.15);

    cout << "TOTAL = R$ " << fixed << setprecision(2) << total << endl;
    return 0;
};