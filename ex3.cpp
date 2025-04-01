#include<iostream>
using namespace std;
int RotateArr(int a[], int n) {
	int left = 0, right = n - 1;
	while (left < right) {
		int mid = (left + right) / 2;
		if (a[mid] > a[mid + 1] || a[mid] < a[mid - 1]) return a[mid + 1];
		else if (a[mid] > a[right]) left = mid + 1;
		else if (a[mid] < a[left]) right = mid;
	}
	return a[left];
}
int main() {
	int a[10];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << RotateArr(a, n);
}