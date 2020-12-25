#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mxN=2*1e5;
ll a[mxN], n;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	for(int i=0; i<n; ++i)
		cin >> a[i];
	ll sum=0, prev=0;
	sort(a, a+n);
	//to solve this problem:
	//subtract 'a[i]' with its copies from the total sum of the previous values
	//the term 'a[i]*i' pertains to the number of times that you will subtract 'a[i]'
	//the 'prev' variable stores the sum of the previous numbers, initially it's zero
	for(int i=0; i<n; ++i) {
		sum+=a[i]*i-prev;
		prev+=a[i];
	}
	cout << sum << "\n";
}
