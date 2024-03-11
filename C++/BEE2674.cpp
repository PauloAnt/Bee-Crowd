#include <bits/stdc++.h>

using namespace std;

int isPrime(int num){
    if (num <= 1) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false;

    for(int i = 3; i < static_cast<int>(pow(num,  0.5)) + 1; i += 2){
        if (num % i == 0) return false;
    }

    return true;
}


int main(){
    int num, cont = 0;
    string num_str;
    while(cin >> num){
        cont = 0;
        num_str = to_string(num);
        for(char letter : num_str){
            if(isPrime(letter - '0')) cont += 1;
        }
        if (isPrime(num) && cont == num_str.length()) cout << "Super" << endl;
        else if(isPrime(num) && cont != num_str.length()) cout << "Primo" << endl;
        else cout << "Nada" << endl;
    }
    return 0;
}