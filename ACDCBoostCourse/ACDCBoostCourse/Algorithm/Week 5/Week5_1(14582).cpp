#include <iostream>
using namespace std;

int main() {
	int woolim[9], startlink[9];
	
	for (int i = 0; i < 9; i++) cin >> woolim[i];
	for (int i = 0; i < 9; i++) cin >> startlink[i];

	int score1 = 0;
	int score2 = 0;

	for (int i = 0; i < 9; i++) {
		score1 = score1 + woolim[i];
		
		if (score1 > score2) {
			cout << "Yes" << endl;
			return 0;
		}
		score2 = score2 + startlink[i];
	}
	cout << "No" << endl;
	return 0;
}
