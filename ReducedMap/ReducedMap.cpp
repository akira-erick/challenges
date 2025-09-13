// https://neps.academy/br/exercise/298

#include <bits/stdc++.h>
#include <queue>
using namespace std;

vector< pair<int, int> > mapa[501];
priority_queue< pair<int,int> > fila;
int pass[501] = {};

int bfs(){

    int total = 0;

    for(auto p: mapa[1]){
        fila.push({(p.second)*-1, p.first});
    }
    pass[1] = 1;

    while(!fila.empty()){
        int valor = (fila.top().first)*-1;
        int filho = fila.top().second;
        fila.pop();

        if(pass[filho]) continue;
        total+=valor;

        for(auto p: mapa[filho]){
            fila.push({(p.second)*-1, p.first});
        }

        pass[filho] = 1;

    }

    return total;

}

int main() {
	int N, M; cin >> N >> M;
    int U, V, C;

    for(int i = 0; i < M; i++){
        cin >> U >> V >> C;
        mapa[U].push_back({V,C});
        mapa[V].push_back({U,C});
    }

    int res = bfs();

    cout << res << "\n";

    return 0;
}
