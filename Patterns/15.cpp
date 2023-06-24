#include <iostream>

using namespace std;

int main(){
	int n; cin >> n;
	int nsp = 0, nst = n;

	for (int i = 1; i <= 2*n-1; i++){
		for (int j = 1; j <= nsp; j++){
			cout << "  ";
		}
		for (int j = 1; j <= nst; j++){
			cout << "* ";
		}
		if (i < n){
			nsp += 2; nst--;
		}else{
			nsp -= 2; nst++;
		}
		cout << endl;
	}

	return 0;
}