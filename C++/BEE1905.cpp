#include <bits/stdc++.h>

using namespace std;

bool isMove(int matriz[5][5], int row, int column) {
    return matriz[row][column] == 0;
}

bool moveMap(int matriz[5][5], int startx, int starty, int destx, int desty) {
    if (isMove(matriz, startx, starty)) {
        matriz[startx][starty] = 2;

        if (startx == destx && starty == desty) {
            return true;
        }
        
        if (startx + 1 < 5 && matriz[startx + 1][starty] == 0 && moveMap(matriz, startx + 1, starty, destx, desty)) {
            return true;
        }
        
        if (startx - 1 >= 0 && matriz[startx - 1][starty] == 0 && moveMap(matriz, startx - 1, starty, destx, desty)) {
            return true;
        }
        
        if (starty + 1 < 5 && matriz[startx][starty + 1] == 0 && moveMap(matriz, startx, starty + 1, destx, desty)) {
            return true;
        }
        
        if (starty - 1 >= 0 && matriz[startx][starty - 1] == 0 && moveMap(matriz, startx, starty - 1, destx, desty)) {
            return true;
        }
    }

    return false;
}

int main() {
    int qntd;
    cin >> qntd;

    for (int i = 0; i < qntd; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> mapa[j][0] >> mapa[j][1] >> mapa[j][2] >> mapa[j][3] >> mapa[j][4];
        }

        if (moveMap(mapa, 0, 0, 4, 4)) {
            cout << "COPS" << endl;
        } else {
            cout << "ROBBERS" << endl;
        }
    }

    return 0;
}
