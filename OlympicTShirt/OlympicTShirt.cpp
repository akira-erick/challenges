// https://neps.academy/br/exercise/980

#include <bits/stdc++.h>
using namespace std;

int main() {
	
    int N; cin >> N;

    int premiadosP = 0, premiadosM = 0;

    int ent;
    for(int i = 0; i < N; i++) {
        cin >> ent;
        if(ent == 1) premiadosP++;
        else premiadosM++;
    }

    int resp = 1;
    
    cin >> ent;
    if(ent < premiadosP++) resp = 0;
    cin >> ent;
    if(ent < premiadosM++) resp = 0;

    if(resp) cout << "S\n";
    else cout << "N\n";

}
