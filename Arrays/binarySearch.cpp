#include <iostream>
#include <cmath>

using namespace std;

int binarySearch(int arr[], int n, int e){
	int low = 0, high = n-1;
	while (low <= high){
		int mid = (low + high) / 2;
		if (arr[mid] == e){
			return mid;
		}else if(arr[mid] > e){
			high = mid-1;
		}else{
			low = mid+1;
		}
	}
	return -1;	
}

int main(){
	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}

	int e; cin >> e;

	cout << binarySearch(arr, n, e) << endl;

	return 0;
}