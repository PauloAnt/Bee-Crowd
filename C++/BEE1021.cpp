#include <bits/stdc++.h>

using namespace std;

int main() {
    double valor;
    int aux, valor_int;
    vector<int> notas = {100, 50, 20, 10, 5, 2};
    vector<int> moedas = {100, 50, 25, 10, 5, 1};

    cin >> fixed >> setprecision(2) >> valor;
    valor_int = static_cast<int>(valor * 100);
    aux = valor_int;

    cout << "NOTAS:" << endl;
    for (int i = 0; i < notas.size(); i++) {
        cout << aux / (notas[i] * 100) << " nota(s) de R$ " << fixed << setprecision(2) << notas[i]  << ".00" << endl;
        aux = aux % (notas[i] * 100);
    }

    cout << "MOEDAS:" << endl;
    for (int i = 0; i < moedas.size(); i++) {
        cout << aux / moedas[i] << " moeda(s) de R$ " << fixed << setprecision(2) << moedas[i] / 100.0 << endl;
        aux = aux % moedas[i];
    }

    return 0;
}
