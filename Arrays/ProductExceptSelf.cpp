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
	int prod = 1;
	for (int i = 0; i < n; i++){
		prod *= arr[i];
	}
	for (int i = 0; i < n; i++){
		ans[i] = prod / arr[i];
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