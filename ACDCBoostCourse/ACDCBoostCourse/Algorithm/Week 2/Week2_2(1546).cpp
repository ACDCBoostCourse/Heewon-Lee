#include <iostream>
using namespace std;

int main() {
	int N;					//���� �� N��
tryAgain:
	int arr[1000] = { 0, };	//���� ������ �����ϴ� �迭
	int max = 0;			//���� �ִ밪
	double sum = 0;			//���� ����
	double avg = 0;			//���� ��հ�
	
	cin >> N;				//���� �� �Է�

	for (int i = 0; i < N; i++) {
		cin >> arr[i];		//���� ���� �Է�
		if (arr[i] > max) 
			max = arr[i];
		sum += arr[i];		//���� ���� ����
	}

	if (sum == 0) {
		cout << "error: �ּ� 1�� ������ 0������ ���ƾ� �մϴ�!" << endl;
		cout << "���� ������ �ٽ� �Է��ϼ���." << endl;
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