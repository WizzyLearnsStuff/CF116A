#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int p = 0;
	int m = 0;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		p += b - a;

		if (m < p) {
			m = p;
		}
	}
	cout << m;
}
