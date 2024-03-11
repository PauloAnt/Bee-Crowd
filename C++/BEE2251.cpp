#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> torre;
  	torre.push_back(1);
  	for(int i=1;i<30;i++)
  	{
  		torre[i]=torre[i-1]*2+1;
  	}
  	int num, cont = 1;
  	while(cin >> num && num != 0){
  		cout << "Teste " << cont << endl;
  		cout << torre[num - 1] << endl;
        cout << "\n";
        cont += 1;
  	}
   	return 0;
}