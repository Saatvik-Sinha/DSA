#include <iostream>

using namespace std;

int main(){
	int n; cin >> n;
	int nst = n/2, nsp = 1;

	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= nst; j++){
			cout << "* ";
		}
		for (int j = 1; j <= nsp; j++){
			cout << "  ";
		}
		for (int j = 1; j <= nst; j++){
			cout << "* ";
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