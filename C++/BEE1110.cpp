#include <bits/stdc++.h>

using namespace std;

int main(){
    int valor;
    deque<int> cartas;
    vector<int> cartas_descartadas;
    while (cin >> valor && valor != 0){
        for(int i = 1; i < valor + 1; i++){
            cartas.push_back(i);
        }
        while(cartas.size() != 1){
            cartas_descartadas.push_back(cartas[0]);
            cartas.pop_front();
            cartas.push_back(cartas[0]);
            cartas.pop_front();
        }
        cout << "Discarded cards: " << cartas_descartadas[0];
        for(int i = 1; i < cartas_descartadas.size(); i++){
            cout<< ", " << cartas_descartadas[i];
            
        }
        cout << "\nRemaining card: " << cartas[0] << endl;
        cartas.clear();
        cartas_descartadas.clear();
    }
    return 0;
}