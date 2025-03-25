//https://neps.academy/br/exercise/168


#include <bits/stdc++.h>
using namespace std;

set <int> carim;


int main() {

	int fig, carimbadas, tem; cin >> fig >> carimbadas >> tem;

	int resp = 0;

	int a;
	for(int i = 0; i < carimbadas; i++){
		cin >> a;
		carim.insert(a);
	}

	for(int i = 0; i < tem; i++){
		cin >> a;
		if(carim.count(a)){
			carim.erase(a);
			carimbadas--;
		}
	}

	cout << carimbadas;

	return 0;
}
