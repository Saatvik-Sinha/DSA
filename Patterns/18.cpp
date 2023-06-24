#include <iostream>

using namespace std;

int main(){
	int n; cin >> n;
	int nsp = n/2, nst = 1;

	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= nsp; j++){
			cout << "  ";
		}
		for (int j = 1; j <= nst; j++){
			cout << "* ";
		}
		if (i < n/2+1){
			nst += 2; nsp--;
		}else{
			nst -= 2; nsp++;
		}
		cout << endl;
	}

	return 0;
}