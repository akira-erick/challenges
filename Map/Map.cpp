//https://neps.academy/exercise/26
#include<bits/stdc++.h>
using namespace std;

array<array<char, 101>, 101> magicMap;

int main(){
    int lines, columns; cin >> lines >> columns;
    char input;
    pair<int, int> place, lastPlace;
    for(int i = 0; i < lines; i++){
        for(int j = 0; j < columns; j++){
            cin >> input;
            if('o' == input){
                place = make_pair(i, j);
            }
            magicMap[i][j] = input;
        }
    }
    
    


    return 0;
}