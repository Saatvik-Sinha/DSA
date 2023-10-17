#include <iostream>

using namespace std;

int pow(int a, int b){
	if (b == 0){
		return 1;
	}else{
		return a * pow(a, b-1);
	}
}

int main(){
	int a = 2, b = 4;

	cout << pow(a, b) << endl;

	return 0;
}