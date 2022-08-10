#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	while (1) {
		string input;
		getline(cin, input);
		if (input[0] == '.') break;

		stack<char> st;
		for (int i = 0; i < input.length() - 1; i++) {
			if (input[i] == '(' || input[i] == '[')
				st.push(input[i]);

			if (input[i] == ')') {
				if (!st.empty() && st.top() == '(') st.pop();
				else {
					cout << "no" << endl;
					break;
				}
			}
			if (input[i] == ']') {
				if (!st.empty() && st.top() == '[') st.pop();
				else {
					cout << "no" << endl;
					break;
				}
			}
			if (st.empty() && i == input.length() - 2)
				cout << "yes" << endl;
			else if (!st.empty() && i == input.length() - 2)
				cout << "no" << endl;
		}
	}
}