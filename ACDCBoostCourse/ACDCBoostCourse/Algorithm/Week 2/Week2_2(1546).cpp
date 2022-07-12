#include <iostream>
using namespace std;

int main() {
	int N;					//과목 수 N개
tryAgain:
	int arr[1000] = { 0, };	//과목별 성적을 저장하는 배열
	int max = 0;			//성적 최대값
	double sum = 0;			//성적 총합
	double avg = 0;			//최종 평균값
	
	cin >> N;				//과목 수 입력

	for (int i = 0; i < N; i++) {
		cin >> arr[i];		//과목별 성적 입력
		if (arr[i] > max) 
			max = arr[i];
		sum += arr[i];		//성적 총합 갱신
	}

	if (sum == 0) {
		cout << "error: 최소 1개 과목은 0점보다 높아야 합니다!" << endl;
		cout << "과목별 성적을 다시 입력하세요." << endl;
		goto tryAgain;
	}
	else {
		avg = sum / max * 100 / N;
		cout << fixed;
		cout.precision(6);
		cout << avg << endl;
	}
	return 0;
}