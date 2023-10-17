#include <iostream>

using namespace std;

bool isItPossible(int i,int n){
	return i*i <= n;
}

int sqrt(int n){
	int si = 1, ei = n;
	int ans = 1;
	while (si <= ei){
		int mid = (si+ei) / 2;
		if (isItPossible(mid, n)){
			ans = mid;
			si = mid + 1;
		}else{
			ei = mid - 1;
		}
	}
	return ans;
}

int main(){
	int n; cin >> n;
	cout << sqrt(n) << endl;
}