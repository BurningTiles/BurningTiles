/**
 * Author  : BurninTiles
 * Created : 2020-10-02 17:13:09
 * Link    : GitHub.com/BurninTiles
 * Program : Beautiful Year
**/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int year, x[4], a, b, c, d;
	cin >> year;
	
	while(year++){
		a = year%10;
		b = year/10%10;
		c = year/100%10;
		d = year/1000;
		if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) break;
	}
	cout << year;
	
	return 0;
}

/**

Question : 
https://codeforces.com/problemset/problem/271/A

**/