/**
 * Author  : BurninTiles
 * Created : 2020-10-02 15:57:40
 * Link    : GitHub.com/BurninTiles
 * Program : Young Physicist
**/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, a, b, c, x, y, z;
	x=y=z=0;
	cin >> n;

	for(int i=0; i<n; i++){
		cin >> a >> b >> c;
		x+=a; y+=b; z+=c;
	}

	x || y || z ? cout << "NO" : cout << "YES";

	return 0;
}

/**

Question : 
https://codeforces.com/problemset/problem/69/A

**/