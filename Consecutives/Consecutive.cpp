//https://neps.academy/br/exercise/110

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;

    int now, before;
    int resp = 1, number = 1;

    for(int i = 0; i < N; i++){
        before = now;
        cin >> now;
        if(i == 0) {
            continue;
        }
        if(before == now) number ++;
        else {
            resp = max(resp, number);
            number = 1;
        }
    }

    resp = max(resp, number);
    cout << resp << '\n';
    return 0;
}
