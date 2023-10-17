#include <iostream>

using namespace std;

int tailfact(int n, int ans){
	if (n == 0){
		return ans;
	}else{
		return tailfact(n-1, ans*n);
	}
}

int main(){
	int n; cin >> n;
	int ans = 1;

	cout << tailfact(n, ans) << endl;

	return 0;
}