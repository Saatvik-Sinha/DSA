#include <iostream>

using namespace std;

bool isPalindrome(string s){
	int si = 0, ei = s.size()-1;

	while (si < ei){
		if (s[si] != s[ei]){
			return false;
		}
		si++; ei--;
	}
	return true;
}

int main(){
	string s; getline(cin, s);
	cout << isPalindrome(s) << endl;

	return 0;
}