#include <bits/stdc++.h>

using namespace std;

int main(){
    string frase, aux, palavra;
    set<string> palavras;
    while(getline(cin, frase)){
        istringstream iss(frase);
        while (iss >> aux) {
            for (char c : aux) {
                if (isalpha(c)) {
                    palavra += tolower(c); 
                } else {
                    if (!palavra.empty()) {
                        palavras.insert(palavra);
                        palavra = "";
                    }
                }
            }
            if (!palavra.empty()) {
                palavras.insert(palavra);
                palavra = "";
            }
        }
    }
    for(auto a: palavras){
        cout << a << endl;
    }
    return 0;
}
