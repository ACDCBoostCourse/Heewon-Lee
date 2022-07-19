#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int num;		// 테스트 케이스 개수
	int cnt = 0;	// 연속된 O의 개수
	int score = 0;	// 테스트 케이스의 점수

	char arr[100] = { 0, };		// 테스트 케이스 저장하는 배열
	int scores[100] = { 0, };	// 테스트 케이스별 점수 저장하는 배열

	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> arr;

		for (int j = 0; j < strlen(arr); j++) {
			if (arr[j] == 'O') {
				cnt++;
				score += cnt;
			}
			if (arr[j] == 'X') {
				cnt = 0;
			}
		}
		scores[i] = score;
		score = 0;
		cnt = 0;
	}

	for (int i = 0; i < num; i++) {
		cout << scores[i] << endl;
	}
}