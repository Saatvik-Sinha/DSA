#include <iostream>

using namespace std;

void display(int arr[], int n){
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

int *pes(int arr[], int n){
	int *ans = new int[n];
	ans[0] = 1;
	int prod = 1;
	for (int j = 1 ; j < n; j++){ //Left
	    prod *= arr[j-1];
	    ans[j] = prod;
	}
	prod = 1;
	for (int j = n-2; j >= 0; j--){ //Right
	    prod *= arr[j+1];
	    ans[j] *= prod;
	}
	return ans;
}

int main(){
	int n; cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}

	int *ans = pes(arr, n);
	display(ans, n);
	delete[] ans;

	return 0;
}