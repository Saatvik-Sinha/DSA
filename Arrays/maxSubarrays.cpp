#include <iostream>
#include <cmath>

using namespace std;

void kadanes(int arr[], int n){
	int maxsum = INT_MIN;
	int sum = 0;

	for (int i = 0; i < n; i++){
		sum += arr[i];
		maxsum = max(maxsum, sum);

		if (sum < 0){
			sum = 0;
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

	kadanes(arr, n);

	return 0;
}