#include <iostream>

using namespace std;

int partition(int a[], int low, int high) {
	int pivot = a[high];
	int i = low - 1;
	int temp;
	for(int j=low;j<high;j++)	{
		if(a[j] <= pivot)	{
			i++;
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	temp = a[i+1];
	a[i+1] = a[high];
	a[high] = temp;
	return (i+1);
}

void quick_sort(int a[], int low, int high) {
	if (low < high) {
		int part = partition(a, low, high);
		quick_sort(a, low, part-1);
		quick_sort(a, part+1, high);
	}
}

int main() {
	int N;
	cin >> N;
	int a[N];
	for(int i=0; i<N; i++) {
		cin >> a[i];
	}
	quick_sort(a, 0, N-1);
	for(int i=0; i<N; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
