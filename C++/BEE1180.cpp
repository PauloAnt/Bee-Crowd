#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
    int qnt, menor = 1000, pos = 0;
    cin >> qnt;
    int num[qnt];

    for (int i = 0; i < qnt; i++){
        cin >> num[i];
        if (num[i] < menor){
            menor = num[i];
            pos = i;
        }
    };
    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << pos << endl;
    return 0;
};