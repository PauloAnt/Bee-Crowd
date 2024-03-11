#include <bits/stdc++.h>

using namespace std;

int main(){
    int qntd;
    double pessoas, litros, b, B, H;
    const double PI = 3.14159265358979323846;

    cin >> qntd;
    for(int i = 0; i < qntd; i++){
        cin >> pessoas >> litros;

        cin >> b >> B >> H;
        double media = litros / pessoas;
        double temp = pow(media * 3.0 * (B - b)/ (PI  * H) + b * b * b, 1.0 / 3.0);
        
        double result = media * 3.0 / (PI *(temp * temp + temp * b + b * b));

        cout << setprecision(2) << fixed << result << endl;
    }
    return 0;
}
