#include <iostream>
using namespace std;
int main() {
	const int MAX_SIZE = 100;
	int arr[MAX_SIZE];
	int arraySize, key, j;
	do {
		cout << "Enter the size of the array (must be less than " << MAX_SIZE << "): ";
		cin >> arraySize;
	} while (arraySize <= 0 || arraySize >= MAX_SIZE);
	for (int i = 0; i < arraySize; ++i) {
		cout << "Array element " << i + 1 << ": ";
		cin >> arr[i];
	}
	for (int i = 1; i < arraySize; ++i) {
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			--j;
		}
		arr[j + 1] = key;
	}
	cout << "The sorted array is: ";
	for (int i = 0; i < arraySize; ++i) {
		cout << arr[i] << " ";
	}
	return 0;
}
