#include<iostream>
using namespace std;
int LinearSearch(int a[], int n,int x) {
	for (int i = 0; i < n; i++) {
		if (a[i] == x) {
			return i;
		}
	}
	return -1;
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
	LinearSearch(a, n, x);
}