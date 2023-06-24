#include <iostream>

using namespace std;

int main(){
	int n; cin >> n;
	int nsp = n, nst = 1;

	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= nsp; j++){
			cout << "  ";
		}
		for (int j = 1; j <= nst; j++){
			if (j % 2 == 0){
				cout << "! ";
			}else{
				cout << "* ";
			}
		}
		cout << endl;
		nsp--; nst += 2;
	}


	return 0;
}