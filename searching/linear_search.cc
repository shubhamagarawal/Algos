#include<iostream>

using namespace std;

void lin_search(int a[], int key, int N) {
	for (int i=0; i<N; i++) {
		if (a[i] == key) {
			cout << "Key found at index " << i+1 << endl;
			return;
		}
	}
	cout << "Key not found " << endl;
}

int main() {
	int N, key;
	cin >> N;
	int a[N];
	for(int i=0; i<N; i++)	{
		cin >> a[i];
	}
	cin >> key;
	lin_search(a, key, N);
	return 0;
}
