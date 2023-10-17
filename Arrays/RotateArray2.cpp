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

void rotatek(int arr[], int n, int k){
	k %= n;
	if (k < 0){
		k += n;
	}
	reversePart(arr, n, 0, n-1);
	reversePart(arr, n, 0, k-1);
	reversePart(arr, n, k, n-1);
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

	int k; cin >> k;
	rotatek(arr, n, k);
	display(arr, n);

	return 0;
}