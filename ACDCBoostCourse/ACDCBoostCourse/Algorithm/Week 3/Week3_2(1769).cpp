#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;		// ���� �Է�(���ڿ� ����)
	int cnt = 0;	// ������ȯ Ƚ��: cnt

	while (s.length() != 1) {	// s�� ���̰� 1�� �ƴ� ��
		int sum = 0;
		for (int i = 0; i < s.length(); i++) {
			sum += s[i] - '0';	// s�� �� �ڸ����� sum�� ���Ѵ�.
		}
		s = to_string(sum);		// s�� sum�� ���ڿ��� ��ȯ�� ��
		cnt++;					// ������ȯ Ƚ�� +1
	}
	cout << cnt << endl;		// ������ȯ Ƚ�� ���

	if (s == "3" || s == "6" || s == "9") cout << "YES" << endl;	// 3�� ����� ���
	else cout << "NO" << endl;										// 3�� ����� �ƴ� ���
	return 0;
}