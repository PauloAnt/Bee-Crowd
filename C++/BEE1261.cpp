#include <bits/stdc++.h>

using namespace std;

int main(){
    int qnd_cargos, qnd_desc, valor, cont = 0, pontuacao = 0;
    string cargo, frase, aux;
    map<string, int> pontos;

    cin >> qnd_cargos >> qnd_desc;
    cin.ignore();
    for(int i = 0; i < qnd_cargos; i++){
        cin >> cargo >> valor;
        pontos[cargo] = valor;
    }
    while(cont != qnd_desc){
        getline(cin, frase);
        istringstream iss(frase);

        while(iss >> aux){
            if (aux == ".") {
                cout << pontuacao << endl;
                pontuacao = 0;
                cont += 1;
                break;
            }
            else if (pontos.find(aux) != pontos.end()) {
                pontuacao += pontos[aux];
            }
        }
    }
    return 0;
}