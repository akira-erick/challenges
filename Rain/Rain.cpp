//https://neps.academy/br/exercise/469

#include<bits/stdc++.h>
using namespace std;

char mapa[10000][10000] = {};

queue< pair<int,int> > fila;

void bfs(int pos, int linha){
    fila.push({0, pos});

    while(!fila.empty()){
        int i = fila.front().first, j = fila.front().second;
        fila.pop();

        if(i==linha-1)continue;

        if(mapa[i+1][j] == '.'){
            mapa[i+1][j]= 'o';
            fila.push({i+1,j});
        }else if(mapa[i+1][j] == '#'){
            if(mapa[i][j+1] == '.'){
                mapa[i][j+1]= 'o';
                fila.push({i,j+1});
            }
            if(mapa[i][j-1] == '.'){
                mapa[i][j-1]= 'o';
                fila.push({i,j-1});
            }
        }
    }
}

int main(){
    int linha, coluna;
    cin >> linha >> coluna;

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j ++){
            cin >> mapa[i][j];
        }
    }

    int pos;
    for(int i = 0; i < coluna; i++){
        if(mapa[0][i] == 'o'){
            pos = i;
            break;
        }
    }

    bfs(pos,linha);

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j ++){
            cout << mapa[i][j];
        }
        cout << endl;
    }

    return 0;

}