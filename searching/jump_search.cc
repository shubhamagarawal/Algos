#include <iostream>
#include <math>

using namespace std;

void jump_search(int a[], int key, int N) {
	int bsize = int(sqrt(N));
	for (int i=0; i<N; i+=bsize) {
		
	}
}

int main() {
	int N, key;
	cin >> N;
	int a[N];
	for(int i=0; i<N; i++)	{
		cin >> a[i];
	}
	cin >> key;
	jump_search(a, key, N);
	return 0;
}
