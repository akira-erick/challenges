//https://neps.academy/br/exercise/271

#include <bits/stdc++.h>
using namespace std;

vector<int> faixa;
vector<int> premi;

int main() {

    int F, O; cin >> F >> O;
    faixa.push_back(0);
    for(int i = 0; i < F-1; i++){
        int valor; cin >> valor;
        faixa.push_back(valor);
    }
    for(int i = 0; i < F; i++){
        int valor; cin >> valor;
        premi.push_back(valor);
    }

    while(O--){
        int ogro; cin >> ogro;
        if(ogro >= faixa[faixa.size()-1]){
            cout << premi[premi.size()-1] << ' ';
            continue;
        }
        
        int ini = 0, fim = faixa.size() - 2;
        while (fim > ini) {
            int mid = ((ini + fim ) / 2 ) + ((ini + fim ) % 2);
            if (ogro > faixa[mid]) {
                ini = mid;
            } else if (ogro < faixa[mid]) {
                fim = mid - 1;
            } else {
                ini = mid;
                fim = mid;
            }
        }
        cout << premi[ini] << ' ';
    }
    cout << '\n';

    return 0;
}
