#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	string str; getline(cin, str);

	reverse(str.begin(), str.end());
    str.insert(str.end(), ' ');
 
    int n = str.size();
    for (int i = 0, j = 0; i < n; i++){
        if (str[i] == ' '){
            reverse(str.begin()+j, str.begin()+i);
            j = i + 1;
        }
    }
    str.pop_back();

    cout << str;

	return 0;
}