#include <iostream>

using namespace std;

void merge(int a[], int low, int mid, int high) {
	int nL = mid - low + 1;
	int nR = high - mid;
	int L[nL], R[nR];
	for(int i=0; i<nL; i++) {
		L[i] = a[low+i];
	}
	for(int j=0; j<nR; j++) {
		R[j] = a[mid+1+j];
	}
	int i=0, j=0, k=low;
	while(i < nL && j < nR) {
		if (L[i] <= R[j]) {
			a[k] = L[i];
			i += 1;
		} else {
			a[k] = R[j];
			j += 1;
		}
		k += 1;
	}
	while(i < nL) {
		a[k] = L[i];
		k += 1;
		i += 1;	
	}	
	while(j < nR) {
		a[k] = R[j];
		k += 1;
		j += 1;
	}
}

void merge_sort(int a[], int low, int high) {
	if (low < high) {
		int mid = (low+high)/2;
		merge_sort(a, low, mid);
		merge_sort(a, mid+1, high);
		merge(a, low, mid, high);
	}
}	

int main() {
	int N;
	cin >> N;
	int a[N];
	for(int i=0; i<N; i++)	{
		cin >> a[i];
	}

	merge_sort(a, 0, N-1);
	for(int i=0; i<N; i++)	{
		cout << a[i] << " ";
	}
	return 0;
}
