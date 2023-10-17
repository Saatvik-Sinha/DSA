#include <iostream>
#include <cmath>

using namespace std;

void sumSubarrays(int arr[], int n){
	int maxsum = INT_MIN;
	for (int i = 0; i < n; i++){
		int sum = 0;
		for (int j = i; j < n; j++){
			sum += arr[j];
			maxsum = max(sum, maxsum);
			cout << sum << endl;
		}
	}
	cout << "Max: " << maxsum << endl;
}

int main(){
	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}

	sumSubarrays(arr, n);
}