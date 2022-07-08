#include <iostream>
using namespace std;
/*
에라토스테네스의 체
1) 여러 수의 소수 판별을 동시에 진행할 때 사용
2) 구현
	(1) 판별할 범위까지의 배열 생성
	(2) 각 인덱스에 해당하는 값으로 초기화
	(3) 2부터 시작하여 특정 숫자의 배수에 해당하는 숫자들을 지움 (자기 자신은 지우지 않는다)
	(4) 이미 지워진 숫자는 건너뛰고
	(5) 남아있는 숫자들 출력
*/

#define max 101

void primeNumberSieve(int list[]) {

	for (int i = 2; i < max; i++)
		list[i] = i;

	for (int i = 2; i < max; i++) {
		if (list[i] == 0) continue;
		for (int j = i + i; j < max; j+=i)
			list[j] = 0;
	}
	for (int i = 2; i < max; i++)
		if(list[i] != 0) cout << list[i] << " ";
}
int main() {

	int list[max];
	primeNumberSieve(list);
}
