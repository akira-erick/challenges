//https://neps.academy/exercise/2831
#include<bits/stdc++.h>
using namespace std;

int fahrenheitToCelsius(int temp){
    int result;

    result = ((temp - 32) * 5) / 9;

    return result;
}

int main(){
    char first, second;
    int firstTemp, secondTemp;

    cin >> first >> second >> firstTemp >> secondTemp;

    if('F' == first){
        firstTemp = fahrenheitToCelsius(firstTemp);
    }
    if('F' == second){
        secondTemp = fahrenheitToCelsius(secondTemp);
    }

    if(firstTemp < secondTemp){
        cout << "A\n";
    }else{
        cout << "B\n";
    }


    return 0;
}