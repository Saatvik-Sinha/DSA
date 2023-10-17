#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n, k;
	cin >> n; cin >> k;

	int digits = (int)log10(n) + 1;
	k %= digits;

	if (k < 0){
		k += digits;
	}

	int r = n % (int)pow(10, k);
	int ans = r*(int)pow(10, digits-k) + n/(int)pow(10, k);

	cout << ans << endl;

	return 0;
}