// https://neps.academy/br/exercise/2291

#include <bits/stdc++.h>
using namespace std;

vector<int> linha1;

int main() {
	
    int N; cin >> N;

    int ent, ant = 0;
    int triangulos = 0, adj = 0;

    
    for(int i = 0; i < N; i++) {
        cin >> ent;
        linha1.push_back(ent);
        if(ent) triangulos++;
        if(ent && ant) adj++;
        ant = ent;
    }

    ant = 0;
    for(int i = 0; i < N; i++) {
        cin >> ent;
        if(ent){
            triangulos++;
            if(!(i%2) && linha1[i]) adj++;
            if(ant) adj++;
        }
        ant = ent;
    }

    cout << (triangulos*3) - (adj*2);
}
