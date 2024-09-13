//https://neps.academy/exercise/1345
#include<bits/stdc++.h>
using namespace std;

int main(){
    int times; cin >> times;
    int size; cin >> size;

    int number, resp = 0;
    bool check;
    while(times--){
        check = true;
        for(int i = 0; i < size; i++){
            cin >> number;
            if(!number) {
                check = false;
            }
        }
        if(check) resp++;
    }

    cout << resp << '\n';

    return 0;
}