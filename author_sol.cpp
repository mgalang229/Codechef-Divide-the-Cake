#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// check if 360 is divisble by 'n' to see if it's possible to make 'n' equal parts
		cout << (360 % n == 0 ? 'y' : 'n') << " ";
		// check if 'n' is less than or equal to 360 to see if it's possible to make 'n' parts
		cout << (n <= 360 ? 'y' : 'n') << " ";
		// check if the sum of all the angles is less than or equal to 360
		cout << ((n * (n + 1)) / 2 <= 360 ? 'y' : 'n') << '\n';
	}
	return 0;
}
