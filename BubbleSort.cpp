#include <iostream>
using namespace std;
//버블 정렬_오름차순

int list[] = { 3,24,1,49,0,16,17,8,9,6 };
int len = sizeof(list) / 4;

int main() {

	for (int i = 0; i < len; i++)
		for (int j = 0; j < len-1-i; j++) 
			if (list[j] > list[j+1]) {
				int temp = list[j];
				list[j] = list[j+1];
				list[j+1] = temp;
			}
	for (int i = 0; i < len; i++)
		cout << list[i] << " ";
	cout << endl;
}
