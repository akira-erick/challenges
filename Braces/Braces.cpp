//https://neps.academy/br/exercise/56

#include <bits/stdc++.h>
using namespace std;

int main() {
    int chaves = 0;
    string linha;
    while (getline(cin, linha)){
        for(int i = 0; i < linha.size() && chaves >= 0; i++){
            if(linha[i] == '{') chaves++;
            if(linha[i] == '}') chaves--;
        }
        if (chaves < 0) break;
    }    
    if(chaves == 0) cout << "S\n";
    else cout << "N\n";

    return 0;
}
