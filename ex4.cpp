#include<iostream>
using namespace std;
int CapacityShip(int a[], int n, int days) {
	int capacity = 0;
	int Num = 0, S = 0;
	for (int i = 0; i < n; i++) {
		if (capacity + a[i] <= a[n - 1]) {
			Num = i;
			capacity = capacity + a[i];
		}
	}
	if (days >= n - Num) {
		return a[n - 1];
	}
	Num = 1, capacity = 0;
	for (int i = 0; i < n - days; i++) {
		capacity = capacity + a[i];
	}
	for (int i = n - days; i < n; i++) {
		S = S + a[i];
		if (S > capacity) {
			capacity = S;
		}
		if (S >= a[n - 1]) {
			S = 0;
			++Num;
			if (days - Num == n - 1 - i) {
				break;
			}
		}
	}
	return capacity;
}
int main() {
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int days;
	cin >> days;
	cout << CapacityShip(a, 10, days);
}