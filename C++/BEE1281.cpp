#include <bits/stdc++.h>

using namespace std;

struct FrutaValor {
    string nome;
    double valor;
};
struct FrutaQnd {
    string nome;
    long long qnd;
};

int main(){
    int idas, qnd;
    string compras;

    cin >> idas;
    for(int i = 0; i < idas; i++){
        vector<FrutaValor> fruta_valor;
        vector<FrutaQnd> fruta_qnd;
        double soma = 0;

        cin >> qnd;
        cin.ignore(); 

        for(int i = 0; i < qnd; i++){
            FrutaValor frutav;
            getline(cin, compras);
            istringstream iss(compras);
            iss >> frutav.nome >> frutav.valor;
            fruta_valor.push_back(frutav);
        }
        
        cin >> qnd;
        cin.ignore(); 

        for(int i = 0; i < qnd; i++){
            FrutaQnd frutaq;
            getline(cin, compras);
            istringstream iss(compras);
            iss >> frutaq.nome >> frutaq.qnd;
            fruta_qnd.push_back(frutaq);
        }

        for(int i = 0; i < fruta_qnd.size(); i++){
            for(int j = 0; j < fruta_valor.size(); j++){
                if(fruta_qnd[i].nome == fruta_valor[j].nome) {
                    soma += fruta_qnd[i].qnd * fruta_valor[j].valor;
                    break;
                }
            };
        };

        cout << "R$ " << fixed << setprecision(2) << soma << endl;
    };
    return 0;
};