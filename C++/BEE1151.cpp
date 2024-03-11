#include <bits/stdc++.h>

using namespace std;

int main(){
    int num, p = 0, s = 1, aux;
    cin >> num;
    cout << p << " ";
    cout << s;
    for(int i = 0; i < num - 2; i++){
        aux = s;
        s += p;
        p = aux;
        cout << " " << s;
    };    
    cout << "\n";
    return 0;
};