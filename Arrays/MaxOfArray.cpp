#include <iostream>

using namespace std;

void display(int arr[], int n){
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

int maxArr(int arr[], int n){
	int max = arr[0];
	for (int i = 1; i < n; i++){
		if (max < arr[i]){
			max = arr[i];
		}
	}
	return max;
}

int main(){
	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}

	display(arr, n);

	cout << maxArr(arr, n) << endl;

	return 0;
}