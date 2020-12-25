#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int oct(int n) {
	int d=0;
	while(n) {
		d=10*d+(n%8);
		n/=8;
	}
	return d;
}

bool chk(int n) {
	while(n) {
		if(n%10==7)
			return 1;
		n/=10;
	}
	return 0;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;	
	int cnt=0;
	//check every number if it contains a '7' in its digit
	//also, convert every 'i' in its octal form and check again there is a '7'
	//increment 'cnt' if it fails to have a '7' in its digit
	for(int i=1; i<=n; ++i)
		if(!chk(i)&&!chk(oct(i)))
			cnt++;
	cout << cnt << "\n";
}
