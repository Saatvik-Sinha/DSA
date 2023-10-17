#include <iostream>

using namespace std;

void printItoN(int i, int n){
	if (i == n){
		cout << i << endl;
	}else{
		printItoN(i+1, n);
		cout << i << endl;
	}
}

int main(){
	int i = 3, n = 7;

	printItoN(i, n);

	return 0;
}