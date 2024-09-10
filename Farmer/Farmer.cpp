//https://neps.academy/exercise/191
#include<bits/stdc++.h>
using namespace std;


array<array<int,60>,60> plantation;
int main(){

    int times; cin >> times;
    int in; 
    for(int i = 1; i <= times; i++){
        for(int j = 1; j <= times; j++){
            cin >> in;
            plantation[i][j] = in; 
        }
    }

    cin >> times;
    int resp = 0;
    int L1, C1, Ln, Cn;
    while(times--){
        cin >> L1 >> C1 >> Ln >> Cn;

        for(int i = L1; i <= Ln; i++){
            for(int j = C1; j <= Cn; j++){
                resp += plantation[i][j];
                plantation[i][j] = 0;
            }
        }

    }

    cout << resp;
    return 0;
}