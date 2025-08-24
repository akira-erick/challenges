// https://neps.academy/br/exercise/297

#include <bits/stdc++.h>
#include <queue>
using namespace std;

const int INF = 1000000000;

vector < pair<int, int> > mapa[1010];
priority_queue< pair<int, int> > fila;

int dist[1010];
int mark[1010] = {};

void dij(int pilar){
    for(int i = 0; i < pilar+2; i++){
        dist[i] = INF;
    }
    dist[0] = 0;
    fila.push({0,0});
    while(!fila.empty()){
        int p = fila.top().second;
        fila.pop();
        if(mark[p]){
            continue;
        }
        mark[p] = 1;
        for(auto V: mapa[p]){
            int filho = V.first;
            int distancia = V.second;

            if(dist[filho] > distancia + dist[p]){
                dist[filho] = distancia + dist[p];

                fila.push({-dist[filho], filho});
            }
        }
    }

}

int main() {
	
    int pilar, pontes; cin >> pilar >> pontes;
    int pilarA, pilarB, d;
    for(int i = 0; i < pontes; i++){
        cin >> pilarA >> pilarB >> d;
        mapa[pilarA].push_back({pilarB, d});
        mapa[pilarB].push_back({pilarA, d});
    }

    dij(pilar);

    cout << dist[pilar+1] << '\n';


}
