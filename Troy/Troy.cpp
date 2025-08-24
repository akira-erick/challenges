// https://neps.academy/br/exercise/512
#include <bits/stdc++.h>
using namespace std;

vector<int> familia[5*10000+10];
int vis[5*10000+10] = {};

void bfs(int raiz){
    queue<int> fila;
    fila.push(raiz);
    vis[raiz] = 1;

    while(!fila.empty()){
        int pai = fila.front(); fila.pop();
        for(int i = 0; i < (int)familia[pai].size(); i++) {
            int filho = familia[pai][i];
            if(vis[filho]) continue;
            fila.push(filho); vis[filho] = 1;
        }
    }
}

int main() {

    int n, m; cin >> n >> m;
    while(m--) {
        int a, b; cin >> a >> b;
        familia[a].push_back(b);
        familia[b].push_back(a);
    }
	
    int res = 0;
    for(int i = 1; i <= n; i++) {
        if(!vis[i]) {
            bfs(i);
            res++;
        }
    }

    cout << res << endl;

    return 0;
}
