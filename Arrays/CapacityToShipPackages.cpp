#include <iostream>

using namespace std;

bool isItPossible(int weights[], int n, int days, int max){
    int load = 0, i = 0, td = 1;
    while (i < n){
        if (load+weights[i] <= max){
            load += weights[i];
            i++;
        }else{
            td++;
            load = 0;
        }
        
        if(td > days){
            return false;
        }
    }
    return true;
}

int shipWithinDays(int weights[], int n, int days){
    int si = 1, ei = 0;
    for (int i = 0; i < n; i++){
        ei += weights[i];
    }
    
    int ans = -1;
    while (si <= ei){
        int mid = (si + ei) / 2;
        if (isItPossible(weights, n, days, mid)){
            ans = mid;
            ei = mid - 1;
        }else{
            si = mid+1;
        }
    }
    return ans;
}

int main(){
	int n; cin >> n;
	int weights[n];
	for (int i = 0; i < n; i++){
		cin >> weights[i];
	}
	int days; cin >> days;

	cout << shipWithinDays(weights, n, days);

	return 0;
}