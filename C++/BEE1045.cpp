#include <bits/stdc++.h>

using namespace std;

int main(){
    double valor;
    vector<double> num;

    for(int i = 0; i < 3; i++){
        cin >> valor;
        num.push_back(valor);
    };
    sort(num.begin(), num.end(), greater<double>());
    if (num[0] >= num[2] + num[1]){
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else if(pow(num[0], 2) == pow(num[2], 2) + pow(num[1], 2)){
        cout << "TRIANGULO RETANGULO" << endl;
    }
    else if(pow(num[0], 2) > pow(num[2], 2) + pow(num[1], 2)){
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }
    else if(pow(num[0], 2) < pow(num[2], 2) + pow(num[1], 2)){
        cout << "TRIANGULO ACUTANGULO" << endl;
    }
    if(num[0] == num[2] & num[2] == num[1]){
        cout << "TRIANGULO EQUILATERO" << endl;
    }
    if ((num[0] == num[1] && num[0] != num[2])  || (num[0] == num[2] && num[0] != num[1]) || (num[1] == num[2] && num[1] != num[0])){
        cout << "TRIANGULO ISOSCELES" << endl;
    }
    return 0;
};
// se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
// se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
// se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
// se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
// se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
// se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES