#include <iostream>
#include <cmath>

using namespace std;

int numofdigits(int n){
	return (int)log10(n) + 1;
}

bool isArmstrong(int n){
	int digits = numofdigits(n), sum = 0;
	int copy = n;
	while (n != 0){
		int r = n % 10;
		sum += (int)pow(r, digits);
		n /= 10;
	}

	return sum == copy;
}

void printAll(int start, int end){
	for (int i = start; i <= end; i++){
		if (isArmstrong(i)){
			cout << i << endl;
		}
	}
}

int main(){
	int start, end; cin >> start >> end;
	printAll(start, end);

	return 0;
}