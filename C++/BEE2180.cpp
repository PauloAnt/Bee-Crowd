#include <bits/stdc++.h>

using namespace std;

int isPrimo(int num){
    for(int i = 2; i < num; i++){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int valor, cont = 0, aux, soma = 0, h = 0, d = 0;
    cin >> valor;
    // 60000000
    for(int i = valor; i < valor + 200; i++){
        if (cont < 10){
            if (isPrimo(i)){
                cont += 1;
                soma += i;
            }
        }
        else break;
    }
    aux = soma;
    cout << soma << " km/h" << endl;
    while (soma <= 60000000){
        soma += aux;
        h += 1;
        if (h % 24 == 0) d += 1;
    }
    cout << h << " h / " << d << " d" << endl;	
    return 0;
}