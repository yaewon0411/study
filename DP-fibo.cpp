#include <iostream>
using namespace std;

int F[100] = {0,};

int fibo(int n) {

	if (n <= 2) return 1;
	if (F[n] == 0) F[n] = fibo(n - 1) + fibo(n - 2);
	return F[n];
}
int main() {
	
	int n;
	cin >> n;
	cout<<fibo(n);
}
