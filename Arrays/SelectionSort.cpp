#include <iostream>
#include <cmath>

using namespace std;

void swap(int arr[], int i, int j){
	int t = arr[i];
	arr[i] = arr[j];
	arr[j] = t;
}

void selectionSort(int arr[], int n){
	for (int i = 0; i < n; i++){
		int minindex = i;
		for (int j = i+1; j < n; j++){
			if (arr[minindex] > arr[j]){
					minindex = j;
				}
			}
			swap(arr, i, minindex);
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

	selectionSort(arr, n);
	display(arr, n);

	return 0;
}