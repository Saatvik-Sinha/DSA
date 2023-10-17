#include <iostream>

using namespace std;

void swapArrElement(int arr[], int i, int j){
	int t = arr[i];
	arr[i] = arr[j];
	arr[j] = t;
}

void reverseArr(int arr[], int n){
	for (int i = 0; i < n/2; i++){
		swapArrElement(arr, i, n-1-i);
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
	display(arr, n);

	reverseArr(arr, n);

	display(arr, n);

	return 0;
}