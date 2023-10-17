#include <iostream>

using namespace std;

int search(int arr[], int n, int ele, int i=0){
	if (i == n){
		return -1;
	}else if(arr[i] == ele){
		return i;
	}else{
		return search(arr, n, ele, i+1);
	}
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,4};

	int ele; cin >> ele;
	cout << search(arr, (sizeof(arr)/sizeof(arr[0])), ele);

	return 0;
}