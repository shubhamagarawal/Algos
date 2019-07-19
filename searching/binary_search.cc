#include <iostream>

using namespace std;

void bin_search(int a[], int key, int N) {
	int first = 0, last = N;
	int mid;
	for (int i=first; i!=last; i++)	{
		mid = (first+last) / 2;
		if (a[mid] == key)	{
			cout << "Key found at index " << mid+1 << endl;
			return;
		}
		else	if (key < a[mid])	last = mid - 1;
			else	first = mid + 1;
	}
	cout << "Key not found" << endl;
}

int main() {
	int N, key;
	cin >> N;
	int a[N];
	for (int i=0;i<N;i++) {
		cin >> a[i];
	}
	cin >> key;
	bin_search(a, key, N);
	return 0;
}
