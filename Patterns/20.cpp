#include <iostream>

using namespace std;

int main(){
	int n; cin >> n;
	int nsp1 = n-1, nsp2 = -1;

	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= nsp1; j++){
			cout << "  ";
		}
		cout << "* ";
		for (int j = 1; j <= nsp2; j++){
			cout << "  ";
		}
		if (i != 1 && i != n){
			cout << "* ";
		}

		if (i < n/2+1){
			nsp1--; nsp2 += 2;
		}else{
			nsp1++; nsp2 -= 2;
		}
		cout << endl;
	}

	return 0;
}