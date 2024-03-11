#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int num, cont, aux;
    while(cin >> num){
        aux = 1;
        cont = 1;
        while(aux % num != 0) {
            aux = (10 * aux + 1) % num;
            cont++;
        }
        cout << cont << endl;
    }

    return 0;
}