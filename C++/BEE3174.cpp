#include <bits/stdc++.h>

using namespace std;

int main(){
    int qnd;
    string aux, descarte, divi, horas;
    int meta, a1 = 0, a2 = 0, a3 = 0, a4 = 0;

    cin >> qnd;
    cin.ignore();

    vector<pair<string, string>> grupo;

    for(int i = 0; i < qnd; i++){
        getline(cin, aux);
        istringstream iss(aux);
        iss >> descarte >> divi >> horas;
        grupo.push_back({divi, horas});
    };
    for(int i = 0; i < grupo.size(); i++){
        if (grupo[i].first == "bonecos") {
            a1 += stoi(grupo[i].second);
        }
        else if (grupo[i].first == "arquitetos") {
            a2 += stoi(grupo[i].second);
        }
        else if (grupo[i].first == "musicos") {
            a3 += stoi(grupo[i].second);
        }
        else if (grupo[i].first == "desenhistas") {
            a4 += stoi(grupo[i].second);
        }
    }
    cout << a1 / 8 + a2 / 4 + a3 / 6 + a4 / 12 << endl;
    return 0;
};