//https://neps.academy/br/exercise/118

#include<bits/stdc++.h>
using namespace std;

vector<char> palavra;
set<char> vogais = {'a', 'e', 'i', 'o', 'u'};

int main(){
    string s; cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(vogais.count(s[i])){
            palavra.push_back(s[i]);
        }
    }
    
    for(int i = 0, j = (palavra.size()-1); i < (palavra.size()/2); i++, j--){
        if(palavra[i] != palavra[j]){
            cout << "N\n";
            return 0;
        }
    }

    cout << "S\n";

    return 0;
}