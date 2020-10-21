/**
 * Author  : BurninTiles
 * Created : 2020-10-02 16:14:02
 * Link    : GitHub.com/BurninTiles
 * Program : Beautiful Matrix
**/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x[5][5], xi, xj, ans=0;
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			cin >> x[i][j];
			if(x[i][j]){
				xi = i;
				xj = j;
			}
		}
	}
	ans += (xi>2)? xi-2 : 2-xi;
	ans += (xj>2)? xj-2 : 2-xj;
	cout << ans;

	return 0;
}

/**

Question : 
https://codeforces.com/problemset/problem/263/A

**/