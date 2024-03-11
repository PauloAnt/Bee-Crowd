#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> par;
    vector<int> impar;
    int valor;
    for(int i = 0; i < 15; i++){
        cin >> valor;
        if (valor % 2 == 0){
            if (par.size() < 5) par.push_back(valor);
            else{
                for(int i = 0; i < 5; i++){
                    cout << "par[" << i << "] = " << par[i] << endl;
                }
                par.clear();
                par.push_back(valor);
            }
        }
        else{
            if (impar.size() < 5) impar.push_back(valor);
            else{
                for(int i = 0; i < 5; i++){
                    cout << "impar[" << i << "] = " << impar[i] << endl;
                }
                impar.clear();
                impar.push_back(valor);
            }
        }
    };
    if (impar.size() > 0){
        for(int i = 0; i < impar.size(); i++) cout << "impar[" << i << "] = " << impar[i] << endl;
    }
    if (par.size() > 0){
        for(int i = 0; i < par.size(); i++) cout << "par[" << i << "] = " << par[i] << endl;
    }
    return 0;
};
