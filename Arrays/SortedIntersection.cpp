#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector <int> arr1 {1, 2, 2, 2, 3, 3, 4, 5, 6, 6, 7};
	vector <int> arr2 {2, 2, 3, 6, 6, 6, 6, 7, 7, 8, 8, 9, 10, 11};

	vector <int> section {};

	int i = 0, j = 0;

	while (i < arr1.size() && j < arr2.size()){
		if (arr1[i] < arr2[j]){
			i++;
		}else if(arr1[i] > arr2[j]){
			j++;
		}else{
			section.push_back(arr1[i]);
			i++;
			j++;
		}
	}

	for (int i:section){
		cout << i << " ";
	}
	cout << endl;

	return 0;
}