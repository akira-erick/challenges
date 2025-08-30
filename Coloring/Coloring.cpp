// https://neps.academy/br/exercise/535

#include <bits/stdc++.h>
using namespace std;

int figura[203][203] = {};
queue<pair<int,int> > pilha;
int total = 0;

int a[] = {0,1,-1};

void bfs(int X, int Y, int sizeN, int sizeM){

    pilha.push({X,Y});

    while(!pilha.empty()){
        total++;
        int placeX = pilha.front().first;
        int placeY = pilha.front().second;
        pilha.pop();

        for(int i: a){
            if((placeX + i) > sizeN || (placeX + i) < 1) continue;
            for(int j: a){
                if(!i && !j) continue;
                if((placeY + j) > sizeM || (placeY + j) < 1) continue;
                if(figura[placeX+i][placeY+j] == 0){
                    figura[placeX+i][placeY+j] = 1;
                    pilha.push({placeX+i, placeY+j});
                }
            }
        }
    }

}

int main() {
	int N, M, X, Y, K;
    cin >> N >> M;
    cin >> X >> Y;
    cin >> K;

    int A, B;
    for(int i = 0; i < K; i++){
        cin >> A >> B;
        figura[A][B] = 2;
    }

    figura[X][Y] = 1;

    bfs(X, Y, N, M);
    
    cout << total;
    
    return 0;
}
