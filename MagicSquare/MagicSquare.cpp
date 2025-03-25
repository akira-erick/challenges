//https://neps.academy/br/exercise/236

#include <bits/stdc++.h>
using namespace std;

int comp(int soma, int total){
    if (soma != total){
        cout << "-1\n";
        return 0;
    }
    return 1;
}

int main() {
	int N, total=0, soma=0;

    cin >> N;

    int matriz[N][N];


    int entrada;
    for(int i=0; i<N; i++){
        for(int j=0;j<N;j++){
            cin >> entrada;
            matriz[i][j] = entrada;
        }
    }

    //achar total
    for(int j = 0; j<N; j++){
        total += matriz[0][j];
    }

    //linha
    for(int i=0; i<N; i++){
        for(int j=0;j<N;j++){
            soma += matriz[i][j];
        }
        if(!comp(soma, total)) return 0;
        soma=0;
    }

    //coluna
    for(int i=0; i<N; i++){
        for(int j=0;j<N;j++){
            soma += matriz[j][i];
        }
        if(!comp(soma, total)) return 0;
        soma=0;
    }
    //diagonal principal
    for(int i=0; i<N; i++){
        soma += matriz[i][i];
    }
    if(!comp(soma, total)) return 0;
    soma=0;

    //diagonal secundaria
    for(int i=0; i<N; i++){
        soma += matriz[i][N - 1 - i];
    }
    if(!comp(soma, total)) return 0;

    cout << total << '\n';

    return 0;
}
