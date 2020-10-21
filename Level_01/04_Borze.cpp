/**
 * Author  : BurninTiles
 * Created : 2020-10-02 17:08:50
 * Link    : GitHub.com/BurninTiles
 * Program : Borze
**/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;
	for(int i=0; i<s.size(); i++){
		if(s[i]=='.')
			cout << "0";
		else if(s[i+1]=='.'){
			cout << "1";
			++i;
		}
		else{
			cout << "2";
			++i;
		}
	}

	return 0;
}

/**

Question : 
https://codeforces.com/problemset/problem/32/B

**/