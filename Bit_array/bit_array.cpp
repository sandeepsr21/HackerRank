#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef unsigned long long ll;
int main() {
	ll n, s, p, q, a, b;
	cin >> n >> s >> p >> q;
	a = s - 2147483648 * (s >> 31);
	ll cnt = 1;
	for (ll i = 1; i < n; ++i) {
		b = a*p + q;
		b = b - 2147483648 * (b >> 31);
		if (a != b)
			cnt++;
		a = b;
	}
	cout << cnt;
	return 0;
}
