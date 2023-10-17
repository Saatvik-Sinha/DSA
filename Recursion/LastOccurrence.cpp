#include <iostream>

using namespace std;

int search(int arr[], int n, int ele, int i=0, int ans=-1){
	if (i == n){
		return ans;
	}else if(arr[i] == ele){
		return search(arr, n, ele, i+1, i);
	}else{
		return search(arr, n, ele, i+1, ans);
	}
}

int main(){
	int arr[] = {1,2,3,4,5,9,7,8,9,4};

	int ele; cin >> ele;
	cout << search(arr, (sizeof(arr)/sizeof(arr[0])), ele);

	return 0;
}