#include <iostream>

using namespace std;

int main(){
	int n; cin >> n;
	int nsp = -1, nst = n/2 + 1;

	for (int i = 1; i <= n; i++){
		int j = 1;
		while (j <= nst){
			cout << "* ";
			j++;
		}
		for (int j = 1; j <= nsp; j++){
			cout << "  ";
		}
		j = 1;
		if (i == 1 || i == n){
			j = 2;
		}
		while (j <= nst){
			cout << "* ";
			j++;
		}

		if (i < n/2+1){
			nsp += 2; nst--;
		}else{
			nsp -= 2; nst++;
		}
		cout << endl;

	}

	return 0;
}