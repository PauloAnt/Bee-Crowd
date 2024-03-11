#include <bits/stdc++.h>

using namespace std;

int main(){
    int qntd_marm, qntd_casos, num, pos, cont = 0;

    while(cin >> qntd_marm >> qntd_casos && qntd_marm != 0 && qntd_casos != 0){
        vector<int> marm(qntd_marm);
        vector<int> caso(qntd_casos);
        cont += 1;

        for(int i = 0; i < qntd_marm; i++){
            cin >> marm[i];
        }

        for(int i = 0; i < qntd_casos; i++){
            cin >> caso[i];
        }

        sort(marm.begin(), marm.end());

        cout << "CASE# " << cont << ":" << endl;
        for(int i = 0; i < qntd_casos; i++){
            bool found = false;
            for(int j = 0; j < qntd_marm; j++){
                if (caso[i] == marm[j]){
                    found = true;
                    pos = j;
                    break;
                }
            }
            if (found) cout << caso[i] << " found at " << pos + 1 << endl;
            else cout << caso[i] << " not found" << endl;
        }
    }

    return 0;
}
