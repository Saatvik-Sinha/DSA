#include <iostream>

using namespace std;

int subarraySum(int arr[], int n, int k){
	int prefix[n+1];
	prefix[0] = 0;
	for (int i = 0; i < n; i++){
		prefix[i+1] = prefix[i] + arr[i]; 
	}
	
	int count = 0;
	for (int i = 1; i < n+1; i++){
		for (int j = 0; j < i; j++){
			if (prefix[i] - prefix[j] == k){
				count++;
			}
		}
	}
	return count;
}

int main(){
	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}

	int k; cin >> k;

	cout << subarraySum(arr, n, k);

	return 0;
}