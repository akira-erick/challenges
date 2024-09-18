//https://neps.academy/exercise/2832
#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int number, resp = 0, times = 3;
    while(times--){
        cin >> number;
        resp += number;
    }
    cin >> number;
    resp %= number;


    cout << resp << '\n';
    return 0;
}