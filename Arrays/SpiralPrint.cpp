#include <iostream>

using namespace std;

int main(){

	int m = 4, n = 4;
	int arr[m][n] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

	int minr = 0, minc = 0, maxr = m-1, maxc = n-1;
	int te = m*n, count = 0;
	
	while (count < te){
		for (int j = minc; j<=maxc && count<te; j++){
			cout << arr[minr][j] << " ";
			count++;
		}
		minr++;

		for (int i = minr; i<=maxr && count<te; i++){
			cout << arr[i][maxc] << " ";
			count++;
		}
		maxc--;
		
		for (int j = maxc; j>=minc && count<te; j--){
			cout << arr[maxr][j] << " ";
			count++;
		}
		maxr--;
		
		for (int i = maxr; i>=minr && count<te; i--){
			cout << arr[i][minc] << " ";
			count++;
		}
		minc++;	
	}

	return 0;
}