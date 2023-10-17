#include <iostream>

using namespace std;

void printDI(int n){
	if (n == 1){
		cout << 1 << endl;
	}else{
		cout << n << endl;
		printDI(n-1);
		cout << n << endl;
	}
}

int main(){
	int n; cin >> n;

	printDI(n);

	return 0;
}