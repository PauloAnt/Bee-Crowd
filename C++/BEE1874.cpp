#include <bits/stdc++.h>

using namespace std;

int main() {
    int h, p, f, aux;
    string linha, palavra;

    while (cin >> h >> p >> f && h != 0 && p != 0 && f != 0) {
        int matriz[h][p];
        queue<int> blocos;

        for (int i = 0; i < h; i++) {
            getline(cin >> ws, linha);
            istringstream iss(linha);

            for (int j = 0; j < p; j++) {
                iss >> matriz[i][j];
            }
        }

        getline(cin >> ws, linha);
        istringstream iss(linha);

        while (iss >> palavra) {
            blocos.push(stoi(palavra));
        }

        for (int i = p - 1; i >= 0 && !blocos.empty(); i--) {
            for (int j = h - 1; j >= 0 && !blocos.empty(); j--) {
                if (matriz[j][i] == 0) {
                    aux = blocos.front();
                    blocos.pop();
                    matriz[j][i] = aux;
                }
            }
        }

        for (int i = 0; i < h; i++) {
            cout << matriz[i][0];

            for (int j = 1; j < p; j++) {
                cout << " " << matriz[i][j];
            }

            cout << endl;
        }
    }

    return 0;
}
