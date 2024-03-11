#include <bits/stdc++.h>

using namespace std;

int isPrime(int num){
    if (num <= 1) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false;

    for(int i = 3; i < static_cast<int>(pow(num,  0.5)) + 1; i += 2){
        if (num % i == 0) return false;
    }

    return true;
}

int main(){
    int qntd, valor;
    cin >> qntd;
    for(int i = 0; i < qntd; i++){
        cin >> valor;
        if(isPrime(valor)) cout << "Prime" << endl;
        else cout << "Not Prime" << endl;
    }
    return 0;
}