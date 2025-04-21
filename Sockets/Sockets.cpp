//https://neps.academy/br/exercise/219

#include <bits/stdc++.h>
using namespace std;

int main() {
    int resp = 0;
    for(int i = 0; i < 4; i ++){
        int regua; cin >> regua;
        resp += regua-1;
    }
    resp++;
    cout << resp << endl;

    return 0;
}
