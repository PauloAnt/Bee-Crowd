#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int tam;
    while (cin >> tam && tam != 0) {
        int matriz[tam][tam];
        int x = 0, y = tam, num = 1;

        while (true) {
            for (int j = x; j < y; j++) {
                for (int k = x; k < y; k++) {
                    matriz[j][k] = num;
                };
            };
            if (y == 0) break;
            x += 1;
            y -= 1;
            num += 1;
        };

        for (int i = 0; i < tam; i++) {
            for (int j = 0; j < tam; j++) {
                if (j == 0) cout << setw(3) << matriz[i][j];
                else cout << " " << setw(3) << matriz[i][j];
            };
            cout << endl;
        };
        cout << endl;
    };
    return 0;
};
