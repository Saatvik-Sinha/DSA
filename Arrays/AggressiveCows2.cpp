#include <iostream>

using namespace std;

bool isItPossible(int stalls[], int n, int noc, int min){
	int count = 1;
	int place = stalls[0];
	for (int i = 1; i < n; i++){
		if (stalls[i]-place >= min){
			count++;
			place = stalls[i];
		}
	}
	if (count >= noc){
		return true;
	}
	return false;
}

int main(){
	int n = 5;
	int stalls[n] = {1,2,4,8,9};
	int noc = 3;
	
	int si = 1;
	int ei = stalls[n-1];
	int ans = -1;
	while (si <= ei){
		int mid = (si+ei) / 2;
		if (isItPossible(stalls, n, noc, mid)){
			ans = mid;
			si = mid + 1;
		}else{
			ei = mid - 1;
		}
	}
	cout << ans;

	return 0;
}