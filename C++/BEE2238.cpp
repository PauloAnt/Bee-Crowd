#include <bits/stdc++.h> 

using namespace std;
int main(){
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    vector<int> divisores;
    for(int i = 1; i <= sqrt(c); ++i){
        if (c % i == 0){
            if(c/i == i)
                divisores.push_back(i);
            else{
                divisores.push_back(i);
                divisores.push_back(c/i);
            }
        }
    }

    sort(divisores.begin(), divisores.end());
    int result = -1;
    for(int i = 0; i < divisores.size(); i++){
        if(divisores[i] % a == 0 && divisores[i] % b != 0 && d % divisores[i] != 0){
            result = divisores[i];
            break;
        }
    }

    cout << result << endl;

    return 0;
}