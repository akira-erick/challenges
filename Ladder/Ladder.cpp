//https://neps.academy/exercise/165

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    array<int, 1001> numbers;

    int times; cin >> times;
    int number; 
    for(int i = 0; i < times; i++){
        cin >> number;
        numbers[i] = number;
    }

    int dif, resp = 1;

    if(2 > times) {
        cout << 1 << '\n';
    }
    else {
        dif = numbers[0] - numbers.at(1);

        for(int i = 2; i < times; i++){
            if(numbers[i-1] - numbers[i] != dif){
                dif = numbers.at(i-1) - numbers.at(i);
                resp++;
            }
        }
        cout << resp << '\n';

    }
    return 0;
}