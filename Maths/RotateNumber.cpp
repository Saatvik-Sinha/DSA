#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n, k;
	cin >> n;
	cin >> k;

	int digits = (int) log10(n) + 1;
	k %= digits;
	if (k < 0){
		k += digits;
	}

	for (int i = 1; i <= k; i++){
		int r = n % 10;
		n = r*(int)pow(10, digits-1) + n/10;
	}
	cout << n << endl;

	return 0;
}