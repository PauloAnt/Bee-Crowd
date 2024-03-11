#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b;

    while(true){

        cin >> a >> b;
        int soma = 0;
        if (a <= 0 || b <= 0) break;
        if (a < b){
            for(int i = a; i < b + 1; i++){
                soma += i;
                cout << i << " ";
            };
            cout << "Sum=" << soma << endl;
        }
        else{
            for(int i = b; i < a + 1; i++){
                soma += i;
                cout << i << " ";
            };
            cout << "Sum=" << soma << endl;
        };
    };
    return 0;
};