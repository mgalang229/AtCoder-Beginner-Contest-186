#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int h, w;
	cin >> h >> w;
	int a[h][w], mn=INT_MAX;
	for(int i=0; i<h; ++i)
		for(int j=0; j<w; ++j) {
			cin >> a[i][j];
			mn=min(mn, a[i][j]);
		}
	//the goal is to find the sum of all the excess blocks to make every block equal
	int ans=0;
	for(int i=0; i<h; ++i)
		for(int j=0; j<w; ++j)
			if(a[i][j]!=mn) {
				ans+=(a[i][j]-mn);
			}
	cout << ans << "\n";
}
