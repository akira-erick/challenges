//https://neps.academy/exercise/329

#include<bits/stdc++.h>
using namespace std;

array<array<char, 1000> , 1000> matrix;
int main(){

    int M, N; cin >> M >> N;

    char symbol;
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            cin >> symbol;
            matrix[i][j] = symbol;
        }
    }
    int resp = 0;
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            if('#' == matrix[i][j]){
                if(i-1 < 0 || matrix[i-1][j] == '.') {
                    resp++;
                    continue;
                }if(i+1 >= M || matrix[i+1][j] == '.'){
                    resp++;
                    continue; 
                }if(j-1 < 0 || matrix[i][j-1] == '.'){
                    resp++;
                    continue;
                }if(j+1 >= N || matrix[i][j+1] == '.') {
                    resp++;  
                    continue;
                }
            }
        }
    }
    cout << resp << '\n';

    return 0;
}