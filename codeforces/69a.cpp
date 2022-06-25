#include <iostream>
using namespace std;
int main() {
	int n, a=0, b=0, c=0, x, y, z;
	cin >> n ;
	for (int i=0; i<n; ++i) {
		cin >> x >> y >> z;
		a += x;
		b += y;
		c += z;
	}
	if (a==0 && b == 0 && c ==0) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}
// 10:58 pm 25.06.2022
