#include <iostream>
#include <cmath>

using namespace std;

void insert(int arr[], int n, int i){
	int t = arr[i];
	int j = i-1;
	while (j>=0 && t<arr[j]){
			arr[j+1] = arr[j];
			j--;
	}
	arr[j+1] = t;
}

void insertionSort(int arr[], int n){
	for (int i = 1; i < n; i++){
		insert(arr, n, i);
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

	insertionSort(arr, n);
	display(arr, n);

	return 0;
}