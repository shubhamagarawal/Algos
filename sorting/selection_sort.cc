#include <iostream>

using namespace std;

void selection(int a[], int N) {
	int temp;
	int index;
	for(int i=0; i < N-1; i++) {
		index = i;
		for(int j=i+1; j < N; j++)	{
			if (a[index] > a[j]) {
				index = j;
			}			
		}
		temp = a[i];
		a[i] = a[index];
		a[index] = temp;
	}
	for(int i=0;i<N;i++)	{
		cout << a[i] << " ";
	}
}

int main() {
	int N;
	cin >> N;
	int a[N];
	for(int i=0; i<N; i++) {
		cin >> a[i];
	}
	selection(a, N);
	return 0;
}
