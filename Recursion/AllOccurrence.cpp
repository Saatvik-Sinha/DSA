#include <iostream>
#include <vector>

using namespace std;

vector <int> search(int arr[], int n, int ele, int i=0, vector <int> ans={}){
	if (i == n){
		return ans;
	}else if(arr[i] == ele){
		ans.push_back(i);
		return search(arr, n, ele, i+1, ans);
	}else{
		return search(arr, n, ele, i+1, ans);
	}
}

int main(){
	int n = 7;
	int arr[n] = {1, 2, 3, 2, 2, 4, 2};

	int ele; cin >> ele;

	vector <int> ans = search(arr, n, ele);

	for (int i:ans){
		cout << i << " ";
	}

	return 0;
}