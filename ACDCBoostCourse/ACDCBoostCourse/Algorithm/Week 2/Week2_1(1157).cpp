#include <iostream>
#include <string>
using namespace std;
#define ALPHABET_NUM 26
#define PRINT(x) cout << x << endl

int main() {
	int num[ALPHABET_NUM] = { 0, };
	string word;	//입력받을 단어
	int size;		//입력받은 단어의 길이
	int m_cnt = 0;	//max count
	int m_idx = 0;	//max index
	int cnt = 0;	//count

	cin >> word;
	size = word.length();	
	
	for (int i = 0; i < size; i++) {
		int n = word[i];	//각각의 알파벳(아스키)

		if (n < 'a') 
			num[n - 'A']++;			// 대문자일 경우
		else 
			num[n - 'a']++;			// 소문자일 경우
	}

	for (int i = 0; i < ALPHABET_NUM; i++) {
		if (num[i] > m_cnt) {		
			m_cnt = num[i];
			m_idx = i;
			cnt = 0;
		}
		else if (num[i] == m_cnt) {
			m_idx = '?'; 
			cnt++;
		}
	}

	if (cnt >= 1) 
		PRINT(char(m_idx));	
	else 
		PRINT(char(m_idx + 65));
}