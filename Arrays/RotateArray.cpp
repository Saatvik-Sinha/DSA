#include <iostream>

using namespace std;

void rotate1(int arr[], int n){
	int t = arr[n-1];
	for (int i = n-1; i > 0; i--){
		arr[i] = arr[i-1];
	}
	arr[0] = t;
}

void rotatek(int arr[], int n, int k){
	k %= n;
	if (k < 0){
		k += n;
	}
	for (int i = 0; i < k; i++){
		rotate1(arr, n);
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

	int k; cin >> k;
	rotatek(arr, n, k);
	display(arr, n);

	return 0;
}