#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a, b, valor, cont;
    set<long long> list_a;
    set<long long> list_b;
    set<long long> intersecao;

    while (cin >> a >> b){
        if (a == 0 & b == 0) break;
        cin.ignore();
        list_a.clear();
        list_b.clear();
        intersecao.clear();
        cont = 0;

        for(int i = 0; i < a; i++){
            cin >> valor;
            list_a.insert(valor);
        }
        for(int i = 0; i < b; i++){
            cin >> valor;
            list_b.insert(valor);
        }
        set_union(list_a.begin(), list_a.end(), list_b.begin(), list_b.end(), inserter(intersecao, intersecao.end()));
        cont = min(intersecao.size() - list_b.size(), intersecao.size() - list_a.size());
        cout << cont << endl;
    };
    return 0;
};