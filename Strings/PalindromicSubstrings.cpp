#include <iostream>
#include <algorithm>

using namespace std;

bool isPalindrome(string s){
	string r = s;
	reverse(r.begin(), r.end());

	if (s == r){
		return true;
	}
	return false;
}

void printSubstrings(string s){
	for (int i = 0; i < s.size(); i++){
		string sub = "";
		for (int j = i; j < s.size(); j++){
			sub += s[j];
			if (isPalindrome(sub)){
				cout << sub << endl;
			}
		}
	}
}

int main(){
	string s; getline(cin, s);
	printSubstrings(s);

	return 0;
}