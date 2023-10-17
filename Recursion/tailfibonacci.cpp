#include <iostream>

using namespace std;

int fib(int n, int a=0, int b=1){
	if (n == 0){
		return a;
	}else{
		return fib(n-1, b, a+b);
	}
}

int main(){
	int n; cin >> n;

	cout << fib(n) << endl;
}