#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long n, k;
		cin >> n >> k;
		vector<long long> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// view the image in this repository for better understanding
		// find the smallest element
		int mn = *min_element(a.begin(), a.end());
		// find the largest element
		int mx = *max_element(a.begin(), a.end());
		// check if the sum of the smallest element and 'k' can accommodate
		// the difference of the largest element and 'k'
		if (mx - mn > 2 * k) {
			cout << -1;
		} else {
			cout << mn + k;
		}
		cout << '\n';
	}
	return 0;
}
