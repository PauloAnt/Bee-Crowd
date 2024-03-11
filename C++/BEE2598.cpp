#include <bits/stdc++.h>

using namespace std;

int main(){
    int qnt, tam, radar, aux;

    cin >> qnt;

    for(int i = 0; i < qnt; i++){
        cin >> tam >> radar;
        aux = tam / radar;

        if (tam % radar != 0) {
            cout << aux + 1<< endl;
        }
        else {
            cout << aux << endl;
        }
        
    }
    return 0;
}