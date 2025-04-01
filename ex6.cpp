#include<iostream>
using namespace std;
int targetSum(int a[], int n, int target) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] + a[j] == target) return 1;
		}
	}
	return 0;
}
int main() {
	int a[10];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int x;
	cin >> x;
	int ketqua = targetSum(a, n, x);
	if (ketqua == 1) {
		cout << "YES";
	}
	else cout << "NO";
}