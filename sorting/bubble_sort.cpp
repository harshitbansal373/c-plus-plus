#include <iostream>
#include <vector>
#include <utility>
#include <ctime>
using namespace std;

const unsigned int N = 10;
vector<unsigned int> arr(N);

void bubble_sort(vector<unsigned int> &arr) {
	bool swapped = true;
	// time complexity is N^2, stop the loop if not changing anymore
	for (size_t i = 0; i < arr.size() - 1 && swapped; ++i) {
		swapped = false;
		for (size_t j = 0; j < arr.size() - 1; ++j) {
			if (arr[j] > arr[j+1]) {
				swap(arr[j], arr[j+1]);
				swapped = true;
			}
		}
	}
}

int main() {
	srand(time(NULL));
	for (auto& i: arr) {
		i = rand() % 256;
	}
	cout << "Before: ";
	for (auto& i: arr) {
		cout << i << (i == *(arr.end()-1) ? "" : ", ");
	}
	cout << endl;
	bubble_sort(arr);
	cout << "After : ";
	for (auto& i: arr) {
		cout << i << (i == *(arr.end()-1) ? "" : ", ");
	}
	cout << endl;
	return 0;
}
