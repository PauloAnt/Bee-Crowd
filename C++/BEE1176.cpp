#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> fib = {0, 1};
    int aux, qnt, valor;

    for(int i = 2; i < 62; i++){
        aux = fib[i - 2] + fib[i - 1];
        fib.push_back(aux);
    };

    cin >> qnt;

    for(int i = 0; i < qnt; i++){
        cin >> valor;
        cout << "Fib(" << valor << ") = " << fib[valor] << endl;
    };
    return 0;
};
