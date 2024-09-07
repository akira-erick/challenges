//https://neps.academy/exercise/128

#include<bits/stdc++.h>
using namespace std;

int main(){

    int terminal, times, devArea; cin >> terminal >> times >> devArea;

    int data, place = 1, resp = 0;
    if(place == devArea){
        resp++;
    }

    for(int i = 0; i < times; i++){
        cin >> data;

        if(1 == data) place++;
        else if(-1 == data) place--;

        if(place == terminal+1){
            place = 1;
        }
        if(place == 0){
            place = terminal;
        }
        if(place == devArea){
            resp++;
        }

        
    }

    cout << resp << '\n';

    return 0;
}