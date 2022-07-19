#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;		// 숫자 입력(문자열 형태)
	int cnt = 0;	// 문제변환 횟수: cnt

	while (s.length() != 1) {	// s의 길이가 1이 아닐 때
		int sum = 0;
		for (int i = 0; i < s.length(); i++) {
			sum += s[i] - '0';	// s의 각 자릿수를 sum에 더한다.
		}
		s = to_string(sum);		// s는 sum을 문자열로 변환한 것
		cnt++;					// 문제변환 횟수 +1
	}
	cout << cnt << endl;		// 문제변환 횟수 출력

	if (s == "3" || s == "6" || s == "9") cout << "YES" << endl;	// 3의 배수인 경우
	else cout << "NO" << endl;										// 3의 배수가 아닌 경우
	return 0;
}