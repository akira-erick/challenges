//https://neps.academy/br/exercise/4

#include <bits/stdc++.h>
using namespace std;

int main() {

    long long soma = 0;
    int n, m;

    cin >> n;
    cin >> m;

    int x, y = -1;

    for(int I = 0; I < n; I++) {
        cin >> x;

        if (x >= y) {
            if (m - x >= y) {
                x = min(x, m-x);
            }
        } else {
            if (m - x >= y) {
                x = m-x;
            } else {
                cout << "-1\n";
                return 0;
            }
        }
        soma+= x;
        y = x;
    }

    cout << soma << '\n';

    return 0;
}
