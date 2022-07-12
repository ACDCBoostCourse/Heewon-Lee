#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;		//자연수 N 입력
	int unit = 0;		
	int ten = 0;			
	int hundred = 0;	
	int count = 0;		//한수의 개수

	if (N < 100)		//100보다 작은 모든 수는 한수
		cout << N;		
	else {			
		count = 99;
		for (int i = 100; i <= N; i++) {
			unit = i % 10;
			ten = (i / 10) % 10;
			hundred = i / 100;			
			 //100이상 N이하인 자연수의 각 자릿수 결정

			if ((hundred - ten) == (ten - unit))  count++;				
			 //각 자리가 등차수열일 경우 한수의 개수 갱신
		}
		cout << count;
	}
}