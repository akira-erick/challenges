//https://neps.academy/br/exercise/52

#include <bits/stdc++.h>
using namespace std;


int main() {
    bool A = false, B = false;
    int times; cin >> times;

    for(int i = 0; i < times; i ++) {
        int N; cin >> N;
        if(N == 1) A = !A;
        if(N == 2){
            B = !B;
            A = !A;
        }
    }

    cout << A << '\n';
    cout << B << '\n';
    
    return 0;
}
