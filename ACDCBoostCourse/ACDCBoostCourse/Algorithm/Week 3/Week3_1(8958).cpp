#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int num;		// �׽�Ʈ ���̽� ����
	int cnt = 0;	// ���ӵ� O�� ����
	int score = 0;	// �׽�Ʈ ���̽��� ����

	char arr[100] = { 0, };		// �׽�Ʈ ���̽� �����ϴ� �迭
	int scores[100] = { 0, };	// �׽�Ʈ ���̽��� ���� �����ϴ� �迭

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