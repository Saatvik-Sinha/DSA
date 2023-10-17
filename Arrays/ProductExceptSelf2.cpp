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
	for (int i = 0; i < n; i++){
		int prod = 1;
		for (int j = 0; j < n; j++){
			if (i != j){
				prod *= arr[j];
			}
		}
		ans[i] = prod;
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