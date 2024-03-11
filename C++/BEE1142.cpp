#include <bits/stdc++.h>

using namespace std;

int main(){
    int valor, cont = 0;

    cin >> valor;
    for (int i = 1; i < valor * 4 + 1; i++){
        if (i % 4 == 0){
            cout << "PUM" << endl;
        }
        else {
            cout << i << " ";
        }
    };
    return 0;
};