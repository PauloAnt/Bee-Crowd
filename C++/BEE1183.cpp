#include <bits/stdc++.h>

using namespace std;

int main() {
    double matriz[12][12];
    double soma = 0.0;
    string sinal;

    cin >> sinal;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> matriz[i][j];
            if (j > i) {
                soma += matriz[i][j];
            };
        };
    };
    if (sinal == "S") {
        cout << fixed << setprecision(1) << soma << endl;
    } 
    else if (sinal == "M") {
        cout << fixed << setprecision(1) << soma/66.0 << endl;
    }
    return 0;
};
