#include <bits/stdc++.h>

using namespace std;

int main(){
    queue<string> fila;
    deque<string> norte, oeste, leste, sul;
    string ponto_inicial, valor;
    string aux;

    cin >> ponto_inicial;
    valor = ponto_inicial;
    while(true){
        if (valor == "0") break;
        else if (valor == "-4"){
            while(cin >> valor){
                if (valor[0] != 'A') break;
                leste.push_back(valor);
            }
        }
        else if (valor == "-3"){
            while(cin >> valor){
                if (valor[0] != 'A') break;
                norte.push_back(valor);
            }
        }
        else if (valor == "-2"){
            while(cin >> valor){
                if (valor[0] != 'A') break;
                sul.push_back(valor);
            }
        }
        else if (valor == "-1"){
            while(cin >> valor){
                if (valor[0] != 'A') break;
                oeste.push_back(valor);
            }
        }
    }
    while(!oeste.empty() || !norte.empty() || !sul.empty() || !leste.empty()){
        if (!oeste.empty()){
            aux = oeste.front();
            fila.push(aux);
            oeste.pop_front();
        }
        if (!norte.empty()){
            aux = norte.front();
            fila.push(aux);
            norte.pop_front();
        }
        if(!sul.empty()){
            aux = sul.front();
            fila.push(aux);
            sul.pop_front();
        }
        if(!leste.empty()){
            aux = leste.front();
            fila.push(aux);
            leste.pop_front();
        }   

    }
    aux = fila.front();
    cout << aux;
    fila.pop();
    while (!fila.empty()) {
        aux = fila.front();
        cout << " " << aux;
        fila.pop();
    }
    cout << endl;

    return 0;
}
