//https://neps.academy/exercise/2330
#include<bits/stdc++.h>
using namespace std;


array<int, 250001> age;
int main(){
    int times; cin >> times;
    int maxNumber, minNumber;
    cin >> age[0];
    maxNumber = age[0];
    minNumber = age[0];
    int number;
    for(int i = 1; i < times; i++){
        cin >> number;
        age[i] = number;
        maxNumber = max(number, maxNumber);
        minNumber = min(number, minNumber);
    }

    for(int i = 0; i < times; i++){
        if(maxNumber - age[i] > age[i] - minNumber) cout << maxNumber - age[i] << '\n';
        else cout << age[i] - minNumber << '\n';
    }
    
    return 0;
}