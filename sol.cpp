#include <bits/stdc++.h>

#define ll long long
#define REP(i, a, b) for (int i = a; i <= b; ++i)

using namespace std;

const int mxN = 1e5;
char s[mxN];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> s[i];
	}
	int cnt = 0, cnt2 = 0;
	for(int i = 0; i < n; ++i) {
		if(s[i] == 'z') cnt++;
		if(s[i] == 'n') cnt2++;
	}
	for(int i = 0; i < cnt2; ++i) {
		cout << 1 << " ";
	}
	for(int i = 0; i < cnt; ++i) {
		cout << 0 << " ";
	}
	cout << "\n";
	return 0;
}
