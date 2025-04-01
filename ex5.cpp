#include<iostream>
using namespace std;
int SubArr(int a[], int n,int target) {
	int Num = 1;
	int Count[10] = { 0 };
	int left = 0, right = n - 1;
	int S = a[left];
	while (left <= right) {
		++left;
		if (S + a[left] < target) {
			S = S + a[left];
			++Num;
		}
		else if (S + a[left] > target) {
			Num = 1;
			S = a[left];
		}

		else if (S + a[left] == target) {
			++Num;
			Count[Num]++;
		}
	}
	for (int i = 0; i < n; i++) {
		if (Count[i] != 0) return i;
	}
}
int main() {
	int a[20];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int x;
	cin >> x;
	cout << SubArr(a, n, x);
}