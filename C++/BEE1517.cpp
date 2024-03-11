#include <bits/stdc++.h>

using namespace std;
int dp[25][25][2005];
bool pos[25][25][2005];

int moveArea(int row, int column, int time, int n, int m, int timemax) {
    if (row > 0 && row <= n && column > 0 && column <= m && time <= timemax) {
        if (dp[row][column][time] != -1) return dp[row][column][time];

        int aux = 0, apple = 0;

        if (pos[row][column][time]) apple = 1;

        aux = max(aux, moveArea(row + 1, column, time + 1, n, m, timemax));       // cima
        aux = max(aux, moveArea(row - 1, column, time + 1, n, m, timemax));       // baixo
        aux = max(aux, moveArea(row, column - 1, time + 1, n, m, timemax));       // esquerda
        aux = max(aux, moveArea(row, column + 1, time + 1, n, m, timemax));       // direita
        aux = max(aux, moveArea(row + 1, column - 1, time + 1, n, m, timemax));   // diag sup esq
        aux = max(aux, moveArea(row + 1, column + 1, time + 1, n, m, timemax));   // diag sup dir
        aux = max(aux, moveArea(row - 1, column - 1, time + 1, n, m, timemax));   // diag inf esq
        aux = max(aux, moveArea(row - 1, column + 1, time + 1, n, m, timemax));   // diag inf dir
        aux = max(aux, moveArea(row, column, time + 1, n, m, timemax));           // mesmo lugar

        return dp[row][column][time] = aux + apple;
    } else return 0;
}

int main() {
    int n, m, k, posx, posy;
    int apple_x, apple_y, apple_t;

    while (true) {
        memset(dp, -1, sizeof dp);
        memset(pos, 0, sizeof pos);
        cin >> n >> m >> k;
        if (n == 0 && m == 0 && k == 0) break;
    
        for (int i = 0; i < k; ++i) {
            cin >> apple_x >> apple_y >> apple_t;
            pos[apple_x][apple_y][apple_t] = 1;
        }

        cin >> posx >> posy;

        cout << moveArea(posx, posy, 0, n, m, apple_t) << endl;
    }

    return 0;
}