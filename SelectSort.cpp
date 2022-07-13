	#include <iostream>
	#define SWAP(x, y, temp)(temp = x, x = y, y = temp)
	using namespace std;

	void selectSort(int list[],int size) {

		int temp;
		for (int i = 0; i < size - 1; i++) {
			int minindex = i;
			for (int j = i + 1; j < size; j++)
				if (list[minindex] > list[j]) minindex = j;
			if (minindex != i) SWAP(list[minindex], list[i], temp);
		}
	}
	int main() {

		int list[8] = { 12,33,4,17,0,94,3,2 };
		int n = sizeof(list) / sizeof(int);
		selectSort(list, n);
		for (int i = 0; i < 8; i++)
			cout << list[i] << " ";
	}
