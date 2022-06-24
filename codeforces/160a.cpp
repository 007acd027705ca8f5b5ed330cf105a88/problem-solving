#include <bits/stdc++.h>
using namespace std;

int main () {
	int n, a[100], s=0, temp=0;
	cin >> n ;
	for (int i=0; i <n; ++i){
		cin >> a[i];
		s += a[i];
	}
	sort(a, a+n);
//	for (int i=0; i<n; ++i) {
//		cout << a[i] << (char)32;
//	}
	cout << endl;
	for (int i=n-1; i>=0; --i) {
//		cout << a[i];
		temp += a[i];
		s -= a[i];
		if (temp > s) {
			cout << endl;
			cout << n-i;
			break;
		}
	}
	return 0;
}
