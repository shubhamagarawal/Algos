#include <iostream>

using namespace std;

void insertionsort(int a[], int N) {
	int temp;
	for(int i=1; i<N; i++) {
		for(int j=i-1;j>0;j--) {
			if (a[j] < a[j-1]) {
				temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}
	for(int i=0; i<N; i++) {
		cout << a[i] << " ";
	}
}

int main() {
	int N;
	cin >> N;
	int a[N];
	for(int i=0; i<N; i++)	{
		cin >> a[i];
	}
	insertionsort(a, N);
	return 0;
}
