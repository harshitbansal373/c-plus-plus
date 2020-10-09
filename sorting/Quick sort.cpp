// Code by yctseng1227
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int N = 10;

void QuickSort(int array[], int left, int right){
	if (left < right){
		// divide (partition)
		int pivot = array[(left+right)/2];
		swap(array[right], array[(left+right)/2]);

		int i = left, j = left;
		for (; j < right; ++j){
			if (array[j] <= pivot){
				if (i < j){
					swap(array[i], array[j]);
				}
				i = i + 1;
			}
		}
		if (i < right){
			swap(array[i], array[right]);
		}

		// then conquer
		QuickSort(array, left, i-1);
		QuickSort(array, i+1, right);

		// no need to combine sub-solutions
	}
}

int main(){
	srand(time(NULL));

	int arr[N] = {};
	cout << "Before:\t";
	for(int i=0; i<N; i++){
		arr[i] = rand()%100 + 1;
		cout << arr[i] << " ";
	}

	cout << "\nAfter:\t";
	QuickSort(arr, 0, N-1);
	for(int i=0; i<N; i++){
		cout << arr[i] << " ";
	}
	return 0;
}
