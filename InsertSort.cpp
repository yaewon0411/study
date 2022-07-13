#include <iostream>
using namespace std;

void insertSort(int list[],int size) {

	int i, j, key;
	for (i = 1; i < size; i++) {
		int key = list[i];
		for (j = i-1; j >=0 && list[j]>key; j--)
			list[j + 1] = list[j];
		list[j + 1] = key;
	}
}
int main() {

	int list[8] = { 12,33,4,17,0,94,3,2 };
	int n = sizeof(list) / sizeof(int);
	insertSort(list, n);
	for (int i = 0; i < 8; i++)
		cout << list[i] << " ";
}
