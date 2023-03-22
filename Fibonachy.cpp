#include <iostream>
using namespace std;
int fib(int n) {
	if (n == 1 || n == 2) return (n - 1);
	return fib(n - 1) + fib(n - 2);
}
int main() {
	int n;
	cout << "n = "; cin >> n;
	int i = 1;
	while (i <= n) {
		cout << fib(i) << endl;
		i++;
	}
	cout << "Hello, World!";
}