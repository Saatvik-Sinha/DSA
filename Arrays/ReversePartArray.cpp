#include <iostream>

using namespace std;

void swapArrElement(int arr[], int i, int j){
	int t = arr[i];
	arr[i] = arr[j];
	arr[j] = t;
}

void reversePart(int arr[], int n, int si, int ei){
	while (si < ei){
		swapArrElement(arr, si, ei);
		si++;
		ei--;
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

	int si, ei; cin >> si >> ei;

	reversePart(arr, n, si, ei);

	display(arr, n);

	return 0;
}