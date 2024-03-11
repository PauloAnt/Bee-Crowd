#include <bits/stdc++.h>

using namespace std;

struct aluno {
    string nome;
    char zona;
    int valor;

    bool operator<(const aluno& other) const {
        if (valor == other.valor) {
            if (zona == other.zona) {
                return nome < other.nome;
            }
            return zona < other.zona;
        }
        return valor < other.valor;
    }
};

int main() {
    int qnt, valor;
    string nome;
    char zona;

    while (cin >> qnt) {
        cin.ignore();

        vector<aluno> alunos;
        for (int i = 0; i < qnt; i++) {
            cin >> nome >> zona >> valor;
            aluno uni = {nome, zona, valor}; 
            alunos.push_back(uni);
        }
        sort(alunos.begin(), alunos.end());
        for (const aluno& obj : alunos) { 
            cout << obj.nome << endl;
        }
    }

    return 0;
}
