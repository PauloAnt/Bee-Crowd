#include <bits/stdc++.h>

using namespace std;

int main() {
    int qntd, capacidade;
    cin >> qntd >> capacidade;

    vector<int> tam(qntd);
    vector<int> valor(qntd);

    for (int i = 0; i < qntd; ++i) {
        cin >> tam[i] >> valor[i];
    }

    vector<int> dp(capacidade + 1, 0);

    for (int i = 1; i <= capacidade; ++i) {
        for (int j = 0; j < qntd; ++j) {
            if (tam[j] <= i) {
                dp[i] = max(dp[i], valor[j] + dp[i - tam[j]]);
            }
        }
    }

    cout << dp[capacidade] << endl;

    return 0;
}
