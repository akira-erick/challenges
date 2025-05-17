//https://neps.academy/br/exercise/246

#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> mat;
vector<int> mat2;
vector<int> resp;

int main() {
	int N; cin >> N;

    while(N--){
        int ent; cin >> ent;
        mat.push_back(ent);
        mat2.push_back(ent);
    }

    sort(mat.begin(), mat.end());

    for(int i = 0; i < mat.size(); i++){
        if(mat[i] != mat2[i]){
            resp.push_back(mat[i]);
        }
    }

    cout << resp.size() << '\n';
    for(int i = 0; i < resp.size(); i++){
        cout << resp[i] << ' ';
    }
    cout << '\n';

    return 0;
}