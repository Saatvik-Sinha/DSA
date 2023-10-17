#include <iostream>

using namespace std;

bool isItPossible(int stalls[], int n, int noc, int min){
	int count = 1;
	int place = stalls[0];
	for (int i = 1; i < n; i++){
		if (stalls[i]-place >= min){
			count++;
			place = stalls[i];
		}
	}
	if (count >= noc){
		return true;
	}
	return false;
}

int main(){
	int n = 5;
	int stalls[n] = {1,2,4,8,9};
	int noc = 3;
	
	for (int i = 1; i <= stalls[n-1]; i++){
		if (!isItPossible(stalls, n, noc, i)){
			cout << (i-1) << endl;
			break;
		}
	}
}