#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b;
    while(cin >> a >> b){
       long long soma1 = 1, soma2 = 1; 

       for(int i = 1; i < a + 1; i++){
        soma1 *= i;
       };
       for(int i = 1; i < b + 1; i++){
        soma2 *= i;
       };
        cout << soma1 + soma2 << endl;
    };
    return 0;

};