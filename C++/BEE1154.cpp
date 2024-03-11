#include <bits/stdc++.h>

using namespace std;

int main(){
    double valor = 0, aux, cont = 0;
    while(true){
        cin >> aux;
        if (aux < 0){
            break;
        };
        valor += aux;
        cont += 1;
    };
    cout << fixed << setprecision(2) << valor/cont << endl;
    return 0;
};