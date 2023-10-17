#include <iostream>

using namespace std;

int main(){
	int m = 4, n = 4;
	int arr[m][n] = {{1,3,7,10},{4,5,11,12},{8,9,14,18},{12,13,15,20}};

	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	int e; cin >> e;

	int row = 0, col = n-1;
	while (col >= 0 && row < m){
		if (arr[row][col] == e){
			cout << row << " " << col << endl;
			return 0;
		}
		else if(arr[row][col] > e){
			col--;
		}
		else{
			row++;
		}
	}
	cout << "-1" << endl;

	return 0;
}