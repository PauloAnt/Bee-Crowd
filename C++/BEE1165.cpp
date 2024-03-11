#include <bits/stdc++.h>

using namespace std;

int main(){
    int qnt, valor, cont = 0;
    cin >> qnt;
    for (int i = 0; i < qnt; i++){
        cin >> valor;
        for (int i = 2; i < valor; i++){
            if (valor % i == 0){
                cont += 1;
            };
        };
        if (cont == 0){
            cout << valor << " eh primo" << endl;
            cont = 0;
        }
        else{
            cout << valor << " nao eh primo" << endl;
            cont = 0;
        };
    };
    return 0;
};