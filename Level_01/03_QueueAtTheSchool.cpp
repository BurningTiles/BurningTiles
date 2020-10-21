/**
 * Author  : BurninTiles
 * Created : 2020-10-02 16:24:21
 * Link    : GitHub.com/BurninTiles
 * Program : Queue at the School
**/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, t;
	string s;
	cin >> n >> t >> s;

	while(t--){
		for(int i=0; i<n; i++)
			if(s[i]=='G' && s[i-1]=='B'){
				s[i]='B'; 
				s[i-1]='G';
				++i;
			}
	}
	cout << s;

	return 0;
}

/**

Question : 
https://codeforces.com/problemset/problem/266/B

**/