#include <iostream>
#include <cmath>

using namespace std;

 int water(int height[], int n){
    int lmax[n];
    lmax[0] = height[0];
    for (int i = 1; i < n; i++){
    	lmax[i] = max(lmax[i-1], height[i]);
    }
    
    int rmax[n];
    rmax[n-1] = height[n-1];
    for (int i = n-2; i >= 0; i--){
    	rmax[i] = max(rmax[i+1], height[i]);
    }
    
    int sum = 0;
    for(int i = 0; i < n; i++){
    	sum += min(lmax[i], rmax[i]) - height[i];
    }
    return sum;
}

int main(){
	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}

	cout << water(arr, n) << endl;
}