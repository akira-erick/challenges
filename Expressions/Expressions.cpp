//https://neps.academy/br/exercise/271

#include <bits/stdc++.h>
using namespace std;

map<char, int> valor;


int main() {

    valor['}'] = 10;
    valor[']'] = 20;
    valor[')'] = 30;
    valor['{'] = -10;
    valor['['] = -20;
    valor['('] = -30;

    int N; cin >> N;
    
    while(N--){
        string palavra; cin >> palavra;
        stack<char> pilha;
        int flag = 1;
        for(int i = 0; i < (int)palavra.length(); i++){
            if(valor[palavra[i]] > 0){
                if(pilha.empty()){
                    flag = 0;
                    break;
                }
                if(!(valor[pilha.top()] + valor[palavra[i]])){
                    pilha.pop();
                } else {
                    flag = 0;
                    break;

                }
            } else {
                pilha.push(palavra[i]);
            }

        }
        if(!pilha.empty()) flag = 0;
        
        if(flag) cout << "S\n";
        else cout << "N\n";
    }

    return 0;

}
