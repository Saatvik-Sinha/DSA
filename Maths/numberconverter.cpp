#include <iostream>
#include <cmath>

using namespace std;

int dtoBase(int n, int base){
	int multiplier = 1, ans = 0;
	while (n != 0){
		int r = n % base;
		ans += r*multiplier;
		multiplier *= 10;
		n /= base;
	}
	return ans;
}

int basetoD(int n, int base){
	int multiplier = 1, ans = 0;
	while (n != 0){
		int r = n % 10;
		ans += r*multiplier;
		multiplier *= base;
		n /= 10;
	}
	return ans;
}

int main(){
	int n, base; cin >> n >> base;
	cout << dtoBase(n, base) << endl;
	cout << basetoD(dtoBase(n, base), base) << endl;

	return 0;
}