#include <iostream>
#include <cmath>

using namespace std;

void swap(int arr[], int i, int j){
	int t = arr[i];
	arr[i] = arr[j];
	arr[j] = t;
}

void bubbleSort(int arr[], int n){
	for (int i = 0; i < n; i++){
		int swaps = 0;
		for (int j = 1; j < n-i; j++){
			if (arr[j-1] > arr[j]){
				swaps++;
				swap(arr, j-1, j);
			}
		}
		if (swaps == 0){
			return;
		}
	}
}

void display(int arr[], int n){
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main(){
	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}

	bubbleSort(arr, n);
	display(arr, n);

	return 0;
}