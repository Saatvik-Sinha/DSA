#include <iostream>

using namespace std;

void printSubstrings(string s){
	for (int i = 0; i < s.size(); i++){
		string sub = "";
		for (int j = 0; j < i; j++){
			sub += s[j];
			cout << sub << endl;;
		}
	}
}

int main(){
	string s; getline(cin, s);
	printSubstrings(s);

	return 0;
}