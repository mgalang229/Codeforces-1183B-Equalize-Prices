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
		// sort the sequence in non-decreasing order
		sort(a.begin(), a.end());
		// the value of 'B' is the sum of the smallest element and 'k'
		long long B = a[0] + k;
		bool checker = true;
		for (int i = 0; i < n; i++) {
			// check if the difference of every element and 'B' is less than or equal to 'k'
			if (abs(a[i] - B) > k) {
				// if there is a difference that is greater than 'k', then set 'checker' to false
				// and break the loop
				checker = false;
				break;
			}
		}
		cout << (checker ? B : -1) << '\n';
	}
	return 0;
}
