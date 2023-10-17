#include <iostream>
#include <cmath>

using namespace std;

void printSubarrays(int arr[], int n){
	for (int i = 0; i < n; i++){
		for (int j = i; j < n; j++){
			int sum = 0;
			for (int k = i; k <= j; k++){
				cout << arr[k] << " ";
				sum += arr[k];
			}
			cout << "-> " << sum << endl;
		}
	}
}

int main(){
	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}

	printSubarrays(arr, n);
}