#include <iostream>
#include <cmath>

using namespace std;

int lowerBound(int arr[], int n, int e){
	int low = 0, high = n-1, ans = -1;
	while (low <= high){
		int mid = ((high-low)/2) + low; //So that sum does not exceed the max value
		if (arr[mid] == e){
			ans = mid;
			high = mid-1;
		}else if(arr[mid] > e){
			high = mid-1;
		}else{
			low = mid+1;
		}
	}
	return ans;	
}

int main(){
	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}

	int e; cin >> e;

	cout << lowerBound(arr, n, e) << endl;

	return 0;
}