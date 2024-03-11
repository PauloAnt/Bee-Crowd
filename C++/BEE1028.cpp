#include <bits/stdc++.h>

using namespace std;

int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
    int a, b, qntd, mult, aux;
    if (a > b) {
        aux = b;
        b = a;
        a = aux;
    }

    cin >> qntd;
    for (int i = 0; i < qntd; i ++){
        cin >> a >> b;
        cout << mdc(a, b) << endl;
    }
    return 0;
}