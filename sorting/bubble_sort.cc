#include <iostream>

using namespace std;

void bubblesort(int a[], int N) {
	int temp;
	for(int i=0; i<N-1; i++)	{
		for(int j=i+1;j<N;j++)	{
			if (a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(int i=0;i<N;i++)	{
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
	bubblesort(a, N);
	return 0;
}
