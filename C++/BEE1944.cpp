#include <bits/stdc++.h>

using namespace std;

int main(){
    int qnd = 0, brindes = 0, cont = 0;
    char letras[4];
    vector<char> painel {'F', 'A', 'C', 'E'};
    stack<char, vector<char>> ultimas_letras ({'F', 'A', 'C', 'E'});

    cin >> qnd;
    while(qnd--){
        cin >> letras[0] >> letras[1] >> letras[2] >> letras[3];
        cont = 0;
        for(int i = 0; i < 4; i++){
            if(ultimas_letras.top() == letras[i]){
                cont += 1;
                ultimas_letras.pop();
            }
            else{
                ultimas_letras.pop();
            }
        };
        if (cont == 4){
            brindes += 1;
            for(int i = 0; i < 4; i++){
                painel.pop_back();
            }
            if(!painel.empty()){
                ultimas_letras = stack<char, vector<char>>(painel);
            } else{
                painel = {'F', 'A', 'C', 'E'};
                ultimas_letras = stack<char, vector<char>>(painel);
            }
        }
        else{
            for(int i = 0; i < 4; i++){
                ultimas_letras.push(letras[i]);
                painel.push_back(letras[i]);
            };
        }
    };
    cout << brindes << endl;
    return 0;
};
