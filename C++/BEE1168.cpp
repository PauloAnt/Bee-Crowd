#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
    int qnt, soma = 0;
    string valor;
    map<char, int> led = {{'0', 6}, {'1', 2}, {'2', 5}, {'3', 5}, {'4', 4}, {'5', 5}, {'6', 6}, {'7', 3}, {'8', 7}, {'9', 6}};
    cin >> qnt;
    
    for(int i = 0; i < qnt; i++){
        cin >> valor;
        for(int j = 0; j < valor.size(); j++){
            soma += led[valor[j]];
        };
        cout << soma << " leds" << endl;
        soma = 0;
    };
    return 0;
};