#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> call = {1, 1};
    vector<int> fibo = {0, 1};    
    int qnt, num;

    for(int i = 2; i < 42; i++){
        call.push_back(call[i - 1] + call[i - 2] + 1);
        fibo.push_back(fibo[i - 1] + fibo[i - 2]);
    }
    cin >> qnt;

    for(int i = 0; i < qnt; i++){
        cin >> num;
        cout << "fib(" << num << ") = " << call[num] - 1 << " calls = " << fibo[num] << "\n";
    }

    return 0;
}