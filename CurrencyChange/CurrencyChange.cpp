#include<bits/stdc++.h>
using namespace std;

int main(){

    int total = 0, real = 0, fifty = 0, twentyFive = 0, ten = 0, five = 0, one = 0;
    int value; cin >> value;

        if(100 <= value){
            real = value / 100;
            value %= 100;
        }
        if(50 <= value){
            fifty = value / 50;
            value %= 50;
        }
        if(25 <= value){
            twentyFive = value / 25;
            value %= 25;
        }
        if(10 <= value){
            ten = value / 10;
            value %= 10;
        }
        if(5 <= value){
            five = value / 5;
            value %= 5;
        }
        if(1 <= value){
            one = value / 1;
            value %= 1;
        }
        total = real + fifty + twentyFive + ten + five + one;
    

    cout << total << '\n';
    cout << real << '\n';
    cout << fifty << '\n';
    cout << twentyFive << '\n';
    cout << ten << '\n';
    cout << five << '\n';
    cout << one << '\n';

    return 0;
}