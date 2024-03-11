#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<long long> pares;
    vector<long long> impares;
    long long qnt, valor;

    cin >> qnt;
    for(int i = 0; i < qnt; i++){
        cin >> valor;
        if (valor % 2 == 0) pares.push_back(valor);
        else impares.push_back(valor);
    };
    sort(pares.begin(), pares.end());
    sort(impares.begin(), impares.end(), greater<long long>());
    for(int num : pares){
        cout << num << endl;
    }
    for(int num : impares){
        cout << num << endl;
    }
    return 0;
};