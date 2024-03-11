#include <bits/stdc++.h>

using namespace std;

int main(){
    int qntd, capacidade, pr, pe;
    while(cin >> qntd && qntd != 0){
        vector<int> preco = {};
        vector<int> peso = {};
        for (int i = 0; i < qntd; i++){
            cin >> pr >> pe;
            preco.push_back(pr);
            peso.push_back(pe);
        }
        cin >> capacidade;
        vector<vector<int>> dp(qntd + 1, vector<int>(capacidade + 1, 0));

        for(int i = 1; i <= qntd; i++){
            for(int j = 0; j <= capacidade; j++){
                if (peso[i - 1] <= j) {
                    dp[i][j] = max(dp[i - 1][j], preco[i - 1] + dp[i - 1][j - peso[i - 1]]);
                } else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        cout << dp[qntd][capacidade] << "\n";
    }

    return 0;
}